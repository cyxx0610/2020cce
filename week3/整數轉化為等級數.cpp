## 整數轉化為等級
```c
#include <stdio.h>
int main()
{ 
	int n;
	scanf("%d",&n);
	if(n>90)printf("A");
	else if(n<90&&n>=80)printf("B");
	else if(n<80&&n>=60)printf("C");
	else printf("F");
	printf("\n");
	
}
```
