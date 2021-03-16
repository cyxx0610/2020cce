## 漸增數列相加
```c
#include <stdio.h>
int main()
{
	int a, ans=0;
	scanf("%d",&a);
	for(int i=a;i>=1;i--){
		ans=(i-1)*i=ans;
		
		}
	printf("%d\n",ans);
}
```