#include <stdio.h>
int main()
{
	int a[3],i,temp,j;
	for(int i=0;i<3;i++){
		scanf("%d",&a[i]);
		}
		for(int i=0;i<3;i++){
			for(int j=i+1;j<3;j++){
			if(a[i],a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
				}
			}
		}
		printf("%d",a[0]*100+a[1]*10+a[2]+1);
}
