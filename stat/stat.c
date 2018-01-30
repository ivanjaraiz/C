#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>
#include <string.h>

int main (int argc, char *argv[]){

	struct stat buf;
	char mtime[100];

	stat("my_file.txt", &buf);
  	printf("st_mode = %o\n", buf.st_mode);

	strcpy(mtime, ctime(&buf, buf.st_mtim));

	printf("st_mtime = %s\n", mtime );  	

	return 0;
}  