#ifndef MAIN_H
#define MAIN_h

#define BUFSIZE 1024
#define ERROR_MSG_LEN 32

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void _putchar(char);
void copy_file(int fd_from, int fd_to);
void error_exit(int code, const char *file);

#endif
