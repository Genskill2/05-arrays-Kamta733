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
