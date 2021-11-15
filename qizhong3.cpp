#include"stdio.h"
int main()
{
	int a,b;
	int n;
	int d;
	int sum1,sum2;
	int c,e,f,x,g;
	scanf("%d",&n);
	for(a=2;a<n;a++)
	{
		for(c=1;c<a;c++)
		{
			d=a%c;
			e=a/c;
			if(d==0)
			{
				sum1=c+e;
			}
		}
	}
	for(b=2;b<n;b++)
	{
		for(x=1;x<b;b++)
		{
			f=a%x;
			g=a/x;
			if(f==0)
			{
				sum2=g+x;
			}
		}
	}
	if(sum1==sum2)
	{
		if(a>b)
		{
			printf("%d,%d",b,a);
		}
		else if(a<b)
		{
			printf("%d,%d",a,b);
		}
	}
	else
	{
		printf("nothing");
	}
	return 0;
 } 
