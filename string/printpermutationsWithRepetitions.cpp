#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int compare (const void * a, const void * b)
{
    return ( *(char *)a - *(char *)b );
}
void allLexicographicRecur(char* str, char* data, int last, int start)
{
	int len = strlen(str), i;
	for(i= 0; i < len; i++)
	{
		data[start] = str[i];
		
		if(start == last)
			printf("%s\n", data);
		else
			allLexicographicRecur(str, data, last, start+1);
	}
}
void allLexographicPemutations(char* str)
{
	int len = strlen(str);
	
	char *data = (char*) malloc(sizeof(char)*(len+1));
	data[len] = '\0';
	qsort(str, len, sizeof(char), compare);
	allLexicographicRecur (str, data, len-1, 0);
 
    free(data);
}

int main()
{
	char str[] = "ABC";
	allLexographicPemutations(str);
	return 0;
}
