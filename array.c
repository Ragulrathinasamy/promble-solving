#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,a[20],p,d,s,t,x,c,z;
	printf("enter any number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\n\tarray elements are");
	for(i=0;i<n;i++)
		printf("\n\t%d",a[i]);
	printf("\n\tnow you can insert an element");
	printf("\n\tenter the position");
	scanf("%d",&p);
	printf("\n\tenter the value");
	scanf("%d",&d);
	for(i=n-1;i>=p-1;i--)
		a[i+1]=a[i];
	a[p-1]=d;
	n++;
	printf("\n\tarray after insertion");
	for(i=0;i<n;i++)
		printf("\n\t%d",a[i]);
	printf("\n\tnow you can delete an element");
	printf("\n\tenter the value to be deleted");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(x==a[i])
		{
			c=i;
			t=a[i];
		}
	}
	for(i=c;i<n;i++)
		a[i]=a[i+1];
	n--;
	printf("\n\tarray after deletion");
	printf("\n\tthe deleted element is %d",t);
	for(i=0;i<n;i++)
		printf("\n\t%d",a[i]);
	printf("\n\tnow you can search the element");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(s==a[i])
			c=i;
		else
			z++;
	}
	if(z==n)
		printf("\n\tthe search element is not available");
	else
		printf("\n\tthe search element is available at %d position",c+1);
	printf("\n\tnow you can traverse an array");
	printf("\n\tarray element are");
	for(i=0;i<n;i++)
		printf("\n\t%d",a[i]);
}
