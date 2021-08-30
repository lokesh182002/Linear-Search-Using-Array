#include<stdio.h>
int main()
{
	int a[10],key,n,i,flag=0;
	printf("Enter number of elements");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter an element to search");
	scanf("%d",&key);
	for(i=0;i<n;++i)
	{
		if(a[i]==key)
		{
			flag++;
			break;
		}
	}
    if(flag!=0)	
    {printf("Element found at index %d",i);
	}
	else
	{
		printf("Element not found");
	}
}
