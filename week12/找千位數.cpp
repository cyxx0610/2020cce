#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>1000&&n<10000)printf("%d",n/1000);
	if(n>10000&&n<10000)printf("%d",n%10000/1000);
	if(n>100000&&n<10000)printf("&d",n%100000/1000%10);
}
