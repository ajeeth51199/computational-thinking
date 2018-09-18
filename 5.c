#include <stdio.h>
void main()
{
int a,b,c;
printf("INPUT");
scanf("%d%d%d",&a,&b,&c);
printf("OUTPUT");
if(a>b&&a>c)
printf("%d",a);
else if(b>a&&b>c)
printf("%d",b);
else
printf("%d",c);
}
