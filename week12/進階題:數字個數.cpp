#include <stdio.h>
int a[10];
int main()
{
	int ans=0;
	for(int i=0;i<10;i++){
	scanf("%d",&a[i]);
	if(a[i]==0)break;
	ans++;
	}
	printf("%d",ans);
} 
