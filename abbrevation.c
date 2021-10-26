/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#include<string.h>
void main()
{
    int i,j=0,m=0;
    char s[50],abv[10];
    printf("Enter string:");
    scanf("%[^\n]%*c",s)
    for(i=0;i<strlen(s);i++)
    {
        abv[m]=s[j];
        if(s[i]==' ')
        {
            m=m+1;
            j=i;
            abv[m]=s[j];
            j++;
        }
    }
    abv[m+1]='\0';
    printf("\nThe Abbrevation is %s \n",abv);


}