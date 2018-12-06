//BUBBLE SORT
#include<stdio.h>
int main()
{
int a[100],n,temp;
printf("enter the size:\n");
scanf("%d",&n);
printf("enter the elements");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
for(int i=0;i<n;i++)
for(int j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
printf("SORTED ELEMENTS:");
for(int i=0;i<n;i++)
printf("%d\t",a[i]);
}
