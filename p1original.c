/*<br> 1.	Write a program to find the distance between two points
		<br> void input(float \*x1, float \*y1, float \*x2, float \*y2);
		<br> void find_distance(float x1, float y1, float x2, float y2, float *area);
		<br> void output(float x1, float y1,float x2, float y2, float area);
		<br> input:
		<br> 1 1 2 2
		<br> output:
		<br> the distance between point (1.000000,1.000000) and (2.000000,2.000000) is  with 1.4142*/
#include<stdio.h>
#include<math.h>
void input(float *x1, float *y1, float *x2, float *y2)
{
  printf("enter two points \n");
  scanf("%f%f%f%f",x1,y1,x2,y2);  
}
void find_distance(float x1, float y1, float x2, float y2, float *area)
{
  *area=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
}
void output(float x1, float y1,float x2, float y2, float area)
{
  printf("the distance between (%f,%f) and (%f,%f) is %f",x1,y1,x2,y2,area);
}
int main()
{
  float x1,y1,x2,y2,area;
  input(&x1,&y1,&x2,&y2);
  find_distance(x1,y1,x2,y2,&area);
  output(x1,y1,x2,y2,area);
  return 0;
}
