/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	int n, sum;
	printf("Enter the number of elements in the array : ");
	scanf("%d", &n);


	printf("Enter the elements of the array : ");
	int arr[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	printf("Enter the sum required : ");
	scanf("%d", &sum);

	int l = 0, r = 0;
	int currsum = 0;
	int found = 0;

	while(r < n)
	{
		currsum += arr[r];
		//printf("\n Currsum is : %d", currsum);
		if (currsum == sum)
		{
			printf("\nThe sub array is [");
			for(int i = l; i <= r; i++)
				printf("%d,", arr[i]);
			printf("]\nIndices range from %d to %d", l, r);
			found = 1;
		}
		else if (currsum > sum)
		{
			while (l <= r && currsum > sum)
			{
				currsum -= arr[l];
				l++;
			}
			if (currsum == sum)
			{
				printf("\nThe sub array is [");
				for(int i = l; i <= r; i++)
				{
					if (i != r)
						printf("%d,", arr[i]);
					else
						printf("%d", arr[i]);
				}
				printf("]\nIndices range from %d to %d\n", l, r);
				found = 1;
			}
		}
		r++;
	}
	
	if (!found)
		printf("\nNot possible to obtain the sum\n");
		
}