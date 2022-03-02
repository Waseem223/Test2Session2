#include <stdio.h>
#include <math.h>
int input_array_size()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}
void init_array(int n, int a[n])
{
  a[0]=0;
  a[1]=0;
  for(int i=2;i<n;i++)
    a[i]=i;
}
void erotosthenes_sieve(int n, int a[n])
{
  int j=2,k;
  while(j<n)
  {
    while(a[j] == 0 ) 
    j++;
    for(int k = j+j; k< n;k +=j)
    {
      a[k]=0;      
    }
    j++;
  } 
}

void output(int n, int a[n])
{
  int i;
  printf("all prime numbers from 2 to %d is\n",n);
  for (i = 0; i < n; i++)
    {
      if (a[i]!=0)
        printf("%d, ", a[i]);
    }
  printf("\n");
}

int main()
{
  int n = input_array_size();
  int a[n];
  init_array(n, a);
  erotosthenes_sieve(n, a);
  output(n, a);
  return 0;
}