#include<stdio.h>
#include<math.h>
void main()
{
 int a,b,c,r1,r2;
 printf("write the equation=");
 scanf("%d%d%d",&a,&b,&c);
 r1=-b+((b*b-4*a*c)^1/2)/2*a;
 r2=-b-((b*b-4*a*c)^1/2)/2*a;
 printf("The roots of the quadratic equation are=%d%d",r1,r2);
}
