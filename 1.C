#include <stdio.h>
int sum(int s[])
{
 int i, n = 0;
 for (i = 0; i < 10; i++)
 {
 n= n+ s[i];
 }
 return(n);
}
float average(float ag[])
{
 int i;
 float n=0;
 for (i =0; i <10; i++)
 {
 n= n+(ag[i]);
 }
 n = n/10;
 return(n);
}
double product(int p[])
{
 int i, n=1;
 for (i =0; i <10; i++)
 {
 n= n*(p[i]);
 }
 return(n);
}
void main()
{
 int p[10];
 int add,i,n,mul;
 float avg,ag[10];
 printf("Enter Elements of the List \n");
 for (i = 0; i<10; i++)
 {
 scanf("%d",&p[i]);
 ag[i]=(int)p[i];
 }
 add = sum(s);
 avg = average(ag);
 mul = product(p);
 printf("Sum of 10 elements = %d\n Average of 10 elements = %f\n product of 10 elements =%d\n",add,avg,mul);
}