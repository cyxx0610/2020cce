## 讀入正數反序列印
```c
#include<stdio.h>
int a[1000];
int main()
{
	int N=0;
	for(int i=0;i<1000;i++){
		scanf("%d",&a[i]);
		if(a[i]==0){
		N=i;
		break;
		}
	}
	
	for(int i=N-i;i>=0;i--){
		printf("%d ",a[i]);
	}
	printf("\n");
}
```
