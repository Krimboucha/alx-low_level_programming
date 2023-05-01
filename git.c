#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char command[100];
	if (argc != 2)
	{
		printf("Dir argument wa7d a sg3\n");
		return (1);
	}
	strcpy(command, "git add .");
	system(command);
	
	sprintf(command, "git commit -m \"%s\"", argv[1]);
	system(command);
	
	strcpy(command, "git push");
	system(command);
	return (0);
}
