#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter Number,n:");
	scanf("%d",&n);
	int i=1;//row
	while(i<=n)
	{
		int j=1;//column
		while(j<=i)
		{
		    printf("%d",i);
		    printf(" ");
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
