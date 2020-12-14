#include <stdio.h>
#include <string.h>

void main()
{
	char str[100];
	int i,l = 0;
	printf("\n Length of a string is:\n ");
	printf("-------------------------------------\n");
	printf("Enter a string : ");
	fgets(str, 100, stdin);
	for (i = 1; str[i] != '\0'; i++) //donot count null char
	{
		l++;
	}
	printf("The string contains %d number of characters. \n",l);
	printf("The length of the string %s is : %d\n\n", str, l);
}