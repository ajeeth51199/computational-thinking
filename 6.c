#include<stdio.h>
void main()
{
    int i;
    printf("INPUT");
    scanf("%d",&i);
    printf("OUTPUT");
    if(i%4==0&&i%100!=0||i%400==0)
    {
        printf("yes");
    
    }
    else
    printf("no");
}
