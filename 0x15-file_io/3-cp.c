#include "main.h"
void close_f(int fd);
char *_buffer(char *f);

/**
* main - copies the content of a file to another file.
* @argc: arguments count
* @argv: array of arg
* Return: 0 success
*/
int main(int argc, char *argv[])
{
	int a, z, rd, wrt;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = _buffer(argv[2]);
	a = open(argv[1], O_RDONLY);
	rd = read(a, buffer, 1024);
	z = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (a == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wrt = write(z, buffer, rd);
		if (z == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(a, buffer, 1024);
		z = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buffer);
	close_f(a);
	close_f(z);

	return (0);
}
/**
* _buffer - proto
* @f: pointer
* Return: buffer.
*/
char *_buffer(char *f)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", f);
		exit(99);
	}

	return (buffer);
}
/**
* close_f - Close file
* @fd: file to be closed
*/
void close_f(int fd)
{
	int cha;

	cha = close(fd);

	if (chac == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
