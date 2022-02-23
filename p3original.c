/*<br> 3.	Write a program find whether a given number is a prime number. 
	<br> int input_number();
	<br> int is_prime(int n);
	<br> void output(int n, int is_prime);
	<br> input: 
	<br> 3
	<br> output:
	<br> 3 is a prime number.*/
#include <stdio.h>
int input_number()
{
  int n;
  printf("enter n value \n");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  int i,count=0,result;
  for(i=1;i<=n;i++)
    {
     if(n % i== 0)
     {
       result=++count;
     }
      
   } 
  return result;
}
void output(int n, int result)
{
  if(result==2)
  {
    printf("the given number %d is prime number",n);
  }
  else
    printf("%d is not prime number",n);
}
int main()
{
  int n,result;
  n=input_number();
  result=is_prime(n);
  output(n,result);
  return 0;
}