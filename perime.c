#include<stdio.h>
void main()
{
	int a,p,l,w;
	printf("enter length  and width no ");
	scanf("%d%d",&l,&w);
	a=l*w;
	p=2*(l+w);
	printf("area of rec is %d\n",a);
	printf("perimeter of rec is %d\n",p);
}
