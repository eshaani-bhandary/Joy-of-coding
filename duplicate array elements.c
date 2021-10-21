/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//duplicate elements
#include <stdio.h>
int main()
{
    int a[20],n,i,j;
    printf("enter number of elements\n");
    scanf("%d",&n);
    printf("enter array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int count =0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            count=count+1;
        }

    }
    if(count==0)
        printf("duplicate not present");
    else
        printf("duplicate present");
}

