/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//frequency
#include <stdio.h>
int main()
{
    int a[20],freq[20],n,i,j,count=0;
    printf("enter number of elements");
    scanf("%d",&n);
    printf("enter array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(int i=0;i<n;i++)
    {

        count =1;

        for(int j=0;j<n;j++)
        {
            if(a[i]==-1)
            break;
            if(a[i]==a[j] && i!=j)

            {
                count=count+1;
                a[j]=-1;

            }
        }
        if(a[i]!=-1)

        printf("frequency of %d is %d\n",a[i],count);
    }
}