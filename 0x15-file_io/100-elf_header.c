#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 128

/**
 * error_exit - Prints an error message and exits with error code 98
 * @message: Error message to be printed
 */
void error_exit(char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(98);
}
/**
 * main - Displays the information contained in the ELF header at the start of an ELF file.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd, i;
	ssize_t bytes_read;
	Elf64_Ehdr header;
	char buffer[BUFFER_SIZE];
	
	if (argc != 2)
		error_exit("Usage: elf_header elf_filename");
	
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		error_exit("Error: Cannot read ELF file");
	
	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read != sizeof(header) || header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
		error_exit("Error: Not an ELF file");
	
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header.e_ident[i]);
	printf("\n");
	printf("  Class:                             %s\n",
			header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" :
			header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
			"Invalid Class");
	printf("  Data:                              %s\n",
			header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
			header.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" :
			"Invalid Data Encoding");
	printf("  Version:                           %d%s\n",
			header.e_ident[EI_VERSION],
			header.e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");
	printf("  OS/ABI:                            %s\n",
			header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" :
			header.e_ident[EI_OSABI] == ELFOSABI_HPUX ? "UNIX - HP-UX" :
			header.e_ident[EI_OSABI] == ELFOSABI_NETBSD ? "UNIX - NetBSD" :
			header.e_ident[EI_OSABI] == ELFOSABI_LINUX ? "UNIX - Linux" :
			header.e_ident[EI_OSABI] == ELFOSABI_SOLARIS ? "UNIX - Solaris" :
			header.e_ident[EI_OSABI] == ELFOSABI_IRIX ? "UNIX - IRIX" :
			header.e_ident[EI_OSABI] == ELFOSABI_FREEBSD ? "UNIX - FreeBSD" :
			header.e_ident[EI_OSABI] == ELFOSABI_TRU64 ? "UNIX - TRU64" :
			header.e_ident[EI_OSABI] == ELFOSABI_ARM_AEABI ? "ARM EABI"
