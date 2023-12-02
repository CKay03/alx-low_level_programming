#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content written in the file.
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int gh;
	int letters;
	int rwrite;

	if (!filename)
	return (-1);

	gh = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (gh == -1)
	return (-1);

	if (!text_content)
	text_content = "";

	for (letters = 0; text_content[letters]; letters++)
	;

	rwrite = write(fd, text_content, nletters);

	if (rwrite == -1)
	return (-1);

	close(gh);

	return (1);
}
