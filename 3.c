#include<stdio.h>
#include<stdlib.h>

int sum(int *a)
{
	int sum=0;
	for(int i=0;i<10;i++)
    	sum+=a[i];
    return sum;    
}

float average(int *a)
{
	int sumarray= sum(a);
	return (float)sumarray/10;
}

int product(int *a)
{
	int product=1;
	for(int i=0;i<10;i++)
		product*=a[i];
}

void main(int argc,char *argv[])
{
	int a[10];
	for(int i=1;i<argc;i++)
	{	
	    a[i-1]=atoi(argv[i]);
	}
	printf("Sum=%d\n",sum(a));
	printf("Average=%f\n",average(a));
	printf("product=%d\n",product(a));
}