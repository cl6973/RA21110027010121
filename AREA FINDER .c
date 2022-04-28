#include<stdio.h>
int main()
{
int a,b,h,l,A;
float r;
int SHAPE;
float pi=3.14;
printf("SELECT THE AREA TO CALCULATE\n");
printf(" 1.TRIANGLE\n 2.SQUARE\n 3.RECTANGLE\n 4.CIRCLE\n");
scanf("%d",&SHAPE);
switch (SHAPE)
{
case 1: 
printf("ENTER BASE & HEIGHT OF TRIANGLE");
scanf("%d %d",&b,&h);
A=(0.5*b*h);
printf("THE AREA OF TRIANGLE IS :%d",A);
break;
case 2:
printf("ENTER THE SIDE OF SQUARE:");
scanf("%d",&a);
A=a*a;
printf("THE AREA OF SQUARE IS :%d",A);
break;
case 3:
printf("ENTER THE LENGTH AND BREADTH OF RECTANGLE:");
scanf("%d %d",&l,&b);
A=l*b;
printf("THE AREA OF RECTANGLE IS :%d",A);
break;
case 4:
printf("ENTER THE RADIUS OF THE CIRCLE:");
scanf("%f",&r);
A=pi*r*r;
printf("THE AREA OF CIRCLE IS :%f",A);
break;
}
return 0;
}
