#include<stdio.h>
void main()
{
 char a[50] ;
int ,count;
printf("Enter line:");
gets(a);
for(i=0;a[i]!='\0';i++)
{
    if(a[i]==' ')
    count++;
}
printf("no of word in line  is %d",count+1);
}
