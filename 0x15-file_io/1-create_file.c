#include "main.h"
/**
* create_file - create file
* @filename: filename
* @text_content: text content
* Return: 1 on success, -1 on failure
*/


int create_file(const char *filename, char *text_content)
{
	int opn, w, count = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
		count++;
	}

	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	w = write(opn, text_content, count);

	if (opn == -1 || w == -1)
	{
		return (-1);
	}
	close(opn);
	return (1);

}
