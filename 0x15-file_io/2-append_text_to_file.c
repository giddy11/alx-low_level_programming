#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, txt_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		txt_len = strlen(text_content);

	fd = open(filename, O_WRONLY | O_APPEND);
	bytes_written = write(fd, text_content, txt_len);

	if (fd == -1 || bytes_written == -1)
		return (-1);

	close(fd);

	return (1);
}
