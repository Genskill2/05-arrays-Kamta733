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
