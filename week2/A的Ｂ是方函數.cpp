## A的Ｂ是方函數
```c
#include <stdio.h>
int MYPOWER (int a,int b)
{
	int ans=1;
	for(int i=b;i>=1;i--){
		ans=ans*a;
		}
		return ans;
	}
	
int main(void)
{
	int a,b;
	scanf("{%d%d",&a,&b);
	printf("[%d]".MYPOWER(a,b));
	return 0;
}
```
