#include <stdio.h>
#include <stdlib.h>
int main()
{
 float d[10000],o[10000],s,w,x=0,k=2;
 int i=1,j;
 scanf("%f%f",&s,&w);
 d[1]=s-w;
 o[1]=w;
 while(1)
 {
  x=w/(2*k-1);
  if(d[i]>=x)
  {
   d[i+1]=d[i]-x;o[i+1]=k*w;k=k+1;i++;
  }	else break;
 }	
 d[i+1]=0;
 o[i+1]=o[i]+d[i]*(2*k-1);
 for(j=i+1;j>=1;j--)
  printf("%d%10.2f%10.2f\n",i+1-j,d[j],o[j]);
 return 0;
}
	
	

