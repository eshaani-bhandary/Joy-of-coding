/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int len(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	return i;
}

int main()
{
	char str[200];
	int f[26] = {0};

	printf("\nEnter your string : ");
	gets(str);

	for (int i = 0; i < len(str); i++)
		f[str[i] - 'a']++;

	int most_f = 0;

	for (int i = 0; i < 26; i++)
	{
		if (f[i] > f[most_f])
			most_f = i;
	}

	printf("\nThe most frequent character in this string is %c with a count of %d.\n", most_f + 'a', f[most_f]);
}