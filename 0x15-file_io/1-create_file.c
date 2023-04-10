#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file with the given filename
 * @filename: The name of the file to be created
 * @text_content: a NULL terminated string
 * Return: 1 on success, otherwise -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int fd, result, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		result = write(fd, text_content, len);
		if (result == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
