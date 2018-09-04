#include<stdio.h>
main()
{
int num,i;
printf("Enter a number");
scanf("%d",&num);

i=2;
while(i<=num-1)
{
if(num%i==0)
{
printf("no");
break;

}
i++;
}


if(num==i)
printf("yes");
}
