#include<stdio.h>
int main()
{
	long i,c=0,t,j;
	long x,y,l,h;

	freopen( "input.txt", "r", stdin );
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
		c=0;
	//printf("Enter x & y coordinates\n");
	scanf("%ld",&x);
	scanf("%ld",&y);
	l=x;
	h=y;
	if(l<0)
	l=(-1)*l;
	for(i=1;i<=l;i++)
        if(l%i==0)
        	c++;
            if(c==2)
                {
                	if(l%2!=0)
                	{
                		if(y==(l+1)||y==(1-x))
                		printf("yes\n");
                		else
                		printf("no\n");
					}
					else if(l==2)
					{
						if(y==2||y==-2)
						printf("yes\n");
						else
						printf("no\n");
					}
					else
					printf("no\n");
				}
            else
                printf("no\n");
}
	return(0);
}
