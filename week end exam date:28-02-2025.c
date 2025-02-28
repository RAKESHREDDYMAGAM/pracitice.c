#include <stdio.h>

int main()
{
	int x,y;

	scanf("%d",&x);
	scanf("%d",&y);
	
	if((x+y)%2==0)
	{
		printf("%d", x*x);
	}
	else
	{
		if(x>y)
		{
			printf("%d",x*y);
		}
		else if(x<=y) 
		{
			if(y%x==0) 
			{
				printf("%d",y/x);
			}
			else
			{
				if(x&1==0)
				{
					if(y&1==0)
					{
						printf("%d",(x+1)*(y-1));
					}
					else
					{
						printf("%d",(x+1)*y);
					}
				}
				else
				{
					if(y&1==0)
					{
						printf("%d",x*(y-1));
					}
					else
					{
						printf("%d",(x+1)*y);
					}
				}
			}
		}
	}


	return 0;
}
