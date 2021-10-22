/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int main()
{
int a[20],n,i,j,count=0;
printf("enter number of elements\n");
scanf("%d",&n);
printf("enter array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n;i++)

{ count =1;
if(a[i]!=-1)
printf("%d",a[i]);

for(j=0;j<n;j++)

{
if(a[i]==a[j] && i!=j)
{
a[j]=-1;
count =count+1;
}

}


}
return 0;
}
