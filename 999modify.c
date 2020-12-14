#include <stdio.h>
int sum(int a)
{
 static int num = 0;
 num+= a;
 return(num);
}
float average(float b,int c)
{
 b= b/c;
 return(b);
}
double product(int a)
{
 static int num=0;
 num= num*(a);
 return(num);
}
void main()
{
 int n, count;
 int add,mul;
 float avg,b,c;
 int k;
while(k!=999)
{
 printf("Enter the number\n");
 scanf("%d",&n);
 if(n!=999)
 {
 count=count+1;
 add = sum(n);
 b=(int)add;
 avg = average(n,count);
 mul = product(n);
}
else
{
k=999;
break;
}
}
printf("Sum = %d\n"" , add);
printf("Average of 10 elements = %f\n",avg);
printf("product of 10 elements =%d\n",mul);
}