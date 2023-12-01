#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 * Return: actual numbers of letters printed. If it fails, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int gh;
	ssize_t nread, nwrite;
	char *big;

	if (!filename)
	return (0);

	gh = open(filename, O_RDONLY);

	if (gh == -1)
	return (0);

	big = malloc(sizeof(char) * (letters));
	if (!big)
	return (0);

	nread = read(gh, big, letters);
	nwrite = write(STDOUT_FILENO, big, nread);

	close(gh);

	free(big);

	return (nwrite);
}
