/* Enter your solutions in this file */
#include <stdio.h>

int mode(int a[],int n)
{
    int mode=0,maxcount=0;
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
            {
                if(a[j]==a[i])
                {

                    count++;
                }
            }
            if(count>maxcount)
            {
                maxcount=count;
                mode=a[i];
            }
    }
    return mode;
}

int min(int a[],int k)
{
int min=a[0];
for(int i=1;i<k;i++)
 {
if(a[i]<min)
    {
      min=a[i];
    }
 }
return (int)min;
}

int max(int a[],int k)
{
int max=a[0];
for(int i=1;i<k;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
return (int)max;
}

int factors(int a,int b[])
{
    int j=0;

    for(int i=2;i<=a;i++)
    {
        while(a%i==0)
        {
          b[j]=i;
          a=a/i;
          j++;
        }
    }
    return j;
}

float average(int x[],int a)
{
float sum=0.00;
for(int i=0;i<a;i++)
{
sum=sum+x[i];
}
return sum/(float)a;
}


