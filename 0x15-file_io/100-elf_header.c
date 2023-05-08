#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

#define ERR(fmt, arg1, arg2) fprintf(stderr, "Error: " fmt "\n", arg1, arg2)
#define ERR_SYSCALL(syscall) ERR("%s failed: %s", #syscall, strerror(errno))

/**
 * print_elf_header - Prints an error message and exits with error code 98
 * @header: Error message to be printed
 */
void print_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}

	printf("\n");
	printf("  Class:                             ");

	switch (header->e_ident[EI_CLASS])
	{
		case ELFCLASSNONE: printf("Invalid class\n"); break;
		case ELFCLASS32:   printf("ELF32\n"); break;
		case ELFCLASS64:   printf("ELF64\n"); break;
		default:           printf("Unknown\n"); break;
	}
	printf("  Data:                              ");

	switch (header->e_ident[EI_DATA])
	{
		case ELFDATANONE: printf("Invalid data encoding\n"); break;
		case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
		case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
		default:          printf("Unknown\n"); break;
	}
	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");

	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:        printf("UNIX - System V\n"); break;
		case ELFOSABI_HPUX:        printf("UNIX - HP-UX\n"); break;
		case ELFOSABI_NETBSD:      printf("UNIX - NetBSD\n"); break;
		case ELFOSABI_LINUX:       printf("UNIX - Linux\n"); break;
		case ELFOSABI_SOLARIS:     printf("UNIX - Solaris\n"); break;
		case ELFOSABI_IRIX:        printf("UNIX - IRIX\n"); break;
		case ELFOSABI_FREEBSD:     printf("UNIX - FreeBSD\n"); break;
		case ELFOSABI_TRU64:       printf("UNIX - TRU64\n"); break;
		case ELFOSABI_ARM:         printf("ARM\n"); break;
		case ELFOSABI_STANDALONE:  printf("Standalone App\n"); break;
		default:                   printf("Unknown\n"); break;
	}
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (header->e_type)
	{
		case ET_NONE:    printf("No file type\n"); break;
		case ET_REL:     printf("Relocatable file\n"); break;
		case ET_EXEC:    printf("Executable file\n"); break;
		case ET_DYN:     printf("Shared object file\n"); break;
		case ET_CORE:    printf("Core file\n"); break;
		default:         printf("Unknown\n"); break;
	}
	printf("  Entry point address:               0x%lx\n", header->e_entry);
}
/**
 * main - Displays the information contained in the ELF header at the start of an ELF file.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		ERR("Usage: %s elf_filename", argv[0]);
		return (98);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd < 0)
	{
		ERR_SYSCALL(open);
		return (1);
	}
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		ERR_SYSCALL(read);
		return (1);
	}

	print_elf_header(&header);

	if (close(fd) < 0)
	{
		ERR_SYSCALL(close);
		return (1);
	}

	return (0);
}
