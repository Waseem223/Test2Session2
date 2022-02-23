/*<br> 2.	Write a program to find whether the three points form a triangle.
	<br> void input_triangle(float \*x1, float \*y1, float \*x2, float \*y2, float \*x3, float \*y3);
	<br> int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
	<br> void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)*/
#include <stdio.h>
#include<math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("enter three points\n");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  int area1,area2,area3,large;
  area1=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
  area2=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
  area3=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
  if(area1<area2+area3 && area2<area1+area3 && area3<area2+area1)
  {
    return 1;
  }
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
  if(result==1)
  {
    printf("three points form a triangle");
  }
  else
  {
    printf("three points cant form a triangle");
  }
}
int main()
{
  float x1,x2,x3,y1,y2,y3,area1,area2,area3;
  int result;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  result=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,result);
  return 0;
}

