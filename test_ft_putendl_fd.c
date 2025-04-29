#include <stdio.h>
#include "test.h"
#include <stdlib.h>
#include <unistd.h> //to use close, read
#include <sys/stat.h> //to use open
#include <fcntl.h> //to use open
#include <string.h>

int remfile() {

    // Name of the file to be deleted
    const char *file = "tmp.txt";

    // Attempt to delete the file
    if (remove(file) == 0) {
        return (1);
    } else {
        return (-1);
    }
}

int create_open()
{

	int fd = open("tmp.txt", O_CREAT | O_RDWR, S_IRUSR | S_IWUSR);
    if (fd == -1) {
        printf("Error opening file");
        return (-1);
    }
	return (fd);
}


int main(void){
	int fd = create_open();
	if (fd < 0)
		return (-1);

	char *test1 = "teststring";
	char res1[strlen(test1) + 1];
	char *testres1 = "teststring\n";
	ft_putendl_fd(test1, fd);
	close(fd);
	fd = create_open();
	if (fd < 0)
		return (-1);
	read(fd, res1, strlen(test1) + 1);
	if (strncmp(testres1, res1, strlen(test1) + 1) == 0)
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);
	close(fd);
	if (remfile() < 0)
		printf("Error deleting file");

	fd = create_open();
	if (fd < 0)
		return (-1);

	char *test2 = "";
	char res2[strlen(test2) + 1];
	char *testres2 = "\n";
	ft_putendl_fd(test2, fd);
	close(fd);
	fd = create_open();
	if (fd < 0)
		return (-1);
	read(fd, res2, strlen(test2) + 1);
	if (strncmp(testres2, res2, strlen(test2) + 1) == 0)
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);
	close(fd);
	if (remfile() < 0)
		printf("Error deleting file");

	printf("\n%s", KNRM);
}
