#include<stdio.h.>
#include<string.h>
int main()
{
char a[50]="hello word";
int c=0,i;
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='')
{
count ++;
}
}
printf("%d",c);
return 0;
}
