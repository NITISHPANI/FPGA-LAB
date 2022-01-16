#include<stdio.h>
void main()
{
int a[8]={0,0,0,0,1,1,1,1};
int b[8]={0,0,1,1,0,0,1,1};
int c[8]={0,1,0,1,0,1,0,1};
int i,ans[8],out,ver;
printf("\n complement of A");
for(i=0;i<8;i++)
{
 if(a[i]==0)
 {
 ans[i]=1;
 }
 else
 {
 ans[i]=0;
 }
 printf("\n NOT %d=%d",a[i],ans[i]);
}
int out1[8];
printf("\n Output of A'C");
for(i=0;i<8;i++)
{
if(ans[i]*c[i]==1)
{
out1[i]=1;
}
else
{
out1[i]=0;
}
printf("\n %d AND %d = %d",ans[i],c[i],out1[i]);
}
int out2[8];
printf("\n Output of BC");
for(i=0;i<8;i++)
{
if(b[i]*c[i]==1)
{
out2[i]=1;
}
else
{
out2[i]=0;
}
printf("\n %d AND %d=%d",b[i],c[i],out2[i]);
}
printf("\n Final output");
for(i=0;i<8;i++)
{
if(a[i]+out2[i]+out1[i]>0)
{
 out=1;
}
else
{
 out=0;
}
printf("\n %d OR %d OR %d=%d",a[i],out2[i],out1[i],out);
}
printf("\n OR of A and C");
for(i=0;i<8;i++)
{
if(a[i]+c[i]>0)
{
ver=1;
}
else
{
ver=0;
}
printf("\n %d OR %d = %d",a[i],c[i],ver);
}
if(ver==out)
{
    printf("\n The logical output can be obtained from two equivalent logical expressions");
}
}
