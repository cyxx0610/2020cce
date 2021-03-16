## 均標與前標計算
```c
#include<stdio.h>
int main()
{
	int n;
	float avg;
	scanf("%d",&n);
	int a[100];
	int sum==0;
	for(inti-0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	avg=(float)sum/n;
	printf("均標：％.lf\n",avg);
	int sumtop=0;
	float avgtop;
	int x=0;
	for(int i=0;i,n;i++)
	{
		if(a[i]>=avg)
		{
			sumtop+=a[i];
			x++;
		}
	}
	avgtop=(float)sumtop/x;
	printf("前標：%.lf\n",avgtop);
}
```