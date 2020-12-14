#include<stdio.h>

struct date
{
	int dd;
	int mm;
	int yy;
};
typedef struct date date;


int main()
{
	date d1,d2,d3;
	int x,y,d,m,z;
	printf("Enter first date(dd/mm/yyyy):");
	scanf("%d/%d/%d",&d1.dd,&d1.mm,&d1.yy);
	if(d1.dd<=30 && d1.mm<=12)
	{
		printf("\nEnter second date(dd/mm/yyyy):");
		scanf("%d/%d/%d",&d2.dd,&d2.mm,&d2.yy);
		if(d2.dd<=30 && d2.mm<=12){
			x = (((d2.yy-d1.yy)*12-d1.mm+d2.mm-1)*30) + (d1.dd + d2.dd);
			z = (x/30);
			d = (x%30);
			m = ((z+d2.mm)%12);
			y = ((z+d2.mm)/12);
			y = y + d2.yy;
			printf("%d/%d/%d\n",d,m,y);
		}
		else
			printf("invalid date");
	}
	else{
		printf("invalid date");
	}
}
