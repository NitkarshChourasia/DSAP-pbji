#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,a[10],temp,j;
cout<<"Enter any 5 numbers in array:\n";
for(i=0;i<=4;i++)
{
cin>>a[i];
}
cout<<"Data before sorting:";
for(j=0;j<5;j++)
{
cout<<a[j]<<" ";
}
for(i=0;i<=4;i++)
{
for(j=0;j<=4-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
cout<<"\nData after sorting:";
for(j=4;j>=0;j--)
{
cout<<a[j]<<" ";
}
getch();
}