#include <stdio.h>
#include <assert.h>


int max(int [], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  }
int max(int a[],int k)
{
int max=a[0];
for(int i=1;i<k;i++)
{
if(a[i]>a[0])
{
max=a[i];
}
}
return (int)max;
}
