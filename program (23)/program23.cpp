#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
int n,m,i,count=0,j,pn[100];
int p[100],size[100];
bool flag[100];
printf("ENTER THE NO PROCESS AND MEMOR :\n ");
scanf("%d%d",&n,&m);
printf("ENTER THE SIZE OF PROCESS \n");
for(i=0;i<n;i++)
scanf("%d",&p[i]);
printf("ENTER THE SIZE OF MEMOR PARTION \n\n");
for(i=0;i<m;i++)
{
scanf("%d",&size[i]);
flag[i]=0;
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(p[i]<=size[j]&&flag[j]==0)
{
flag[j]=true;
pn[j]=i;
count++;
j=j+m;
}
}
}
printf("NO OF PROCESS CAN ACOMADATE :%d\n\n",count);
printf("MEMOR\tPROCESS\n");
for(i=0;i<m;i++ )
{
if(flag[i]==1)
{
printf("%d <-->%d\n",size[i],p[pn[i]]);
}
else
printf("%d\tMEMOR NOT ALLOCATED\n",size[i]);
}
return 0;
}

