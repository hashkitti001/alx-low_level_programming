#include "main.h"
/**
 * read_textfile - reads a text file and prints
 *it to the POSIX standard output
 * @filename: the name of the file to be printed
 * @letters: the number of letters of text to be printed
 *  Return: 0 if NULL
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t o, r, w;

char *holder;

if (filename == NULL)
	{
	return (0);
	}
holder = malloc(sizeof(char) * letters);
if (holder == NULL)
	{
	return (0);
	}
o = open(filename, O_RDONLY);
r = read(o, holder, letters);
w = write(STDOUT_FILENO, holder, r);

if (o == -1 || r == -1 || w == -1 || w != r)
	{
	free(holder);
	return (0);
	}
	free(holder);
	close(o);
return (w);
}
