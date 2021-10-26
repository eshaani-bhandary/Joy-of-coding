/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[50], str2[50];
	printf("Enter string 1 : ");
	scanf("%s", str1);

	printf("Enter string 2 : ");
	scanf("%s", str2);

	int n1 = strlen(str1), n2 = strlen(str2);
	if (n1 != n2)
	{
		printf("Not rotation of each other");
		return 0;
	}

	for (int x = 0; x < n2; x++)
	{
		int isMatching = 1;
		for (int i = 0; i < n2; i++)
		{
			if (str1[i] != str2[(x + i)%n2])
			{
				isMatching = 0;
				break;
			}
		}
		if (isMatching)
		{
			printf("\nSTR2 is a rotation of STR1\n");
			return 0;
		}
	}
	printf("STR1 and STR2 are not rotations of each other\n");
}