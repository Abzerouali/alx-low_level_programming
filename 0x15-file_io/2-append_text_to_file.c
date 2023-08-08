#include "main.h"
/**
*append_text_to_file - appends text to file
*@filename: file name
*@text_content: text to append
*Return: 1 on success and -1 on failure
*Do not create the file if it does not exist
*If filename is NULL return -1
*If text_content is NULL, do not add anything to the file.
*Return 1 if the file exists and -1 if the file does not exist
*or if you do not have the required permissions to write the file.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fds, lenght, wrf;

	if (!filename)
		return (-1);

	if (!text_content)
		lenght = 0;
	else
		lenght = strlen(text_content);

	fds = open(filename, O_RDWR | O_APPEND);
	if (fds == -1)
		return (-1);

	wrf = write(fds, text_content, lenght);
	if (wrf == 1)
		return (-1);
	close(fds);
	return (1);
}
