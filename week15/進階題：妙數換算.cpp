#include<stdio.H>
int main()
{
  int n;
  scanf("%d",&n);
  
  int sen=n%60;
  int main=n/60%60;
  int hour=n/(60*60);
  printf("%02d:%02d:%02d",hour,min,sec);
}
