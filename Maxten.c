void main()
{
int a[10],max,n,i;
clrscr();
printf("Enter any 10 number:");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=1;i<10;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("Maximum element in an array is=%d",max);
getch();
}
