#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

char *_strchr(char *p, const char ch);

char *_strtok(char *str, const char* delim) {
	static char *token;
	char *newstr;
	int delimCheck;

	delimCheck = 1;
	if (str == NULL)
		str = token;			
	while (*str) {
		if (_strchr((char*)delim, *str) == NULL)
		{
			if (delimCheck) {
				delimCheck = 0;
				newstr = str;
			}
		} else {
			if (!delimCheck) {
				*str = '\0';
				token = str + 1;
				return newstr;
			}
		}
		str++;
	}
	if (!delimCheck) {
		token = str;
		return newstr;
	}
	return NULL;
}

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

int main() {
	    char str[] = "ls -a  -l";
	        const char delim[] = " \n\t";
		    char* token = _strtok(str, delim);
		        while (token != NULL) {
				        printf("%s\n", token);
					        token = _strtok(NULL, delim);
						    }
			    return 0;
}

