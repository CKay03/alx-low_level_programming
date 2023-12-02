#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 * Return: 1 if the file exists. -1 if the file does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int gh;
	int letters;
	int rwrite;

	if (!filename)
	return (-1);

	gh = open(filename, O_WRONLY | O_APPEND);

	if (gh == -1)
	return (-1);

	if (text_content)
	{
	for (letters = 0; text_content[letters]; letters++)
	;

	rwrite = write(gh, text_content, letters);

	if (rwrite == -1)
	return (-1);
	}

	close(gh);

	return (1);
}
