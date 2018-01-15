#include <stdio.h>
int main(void)
{
 int height,width;
 scanf("%d",&height);
 scanf("%d",&width);
 int sol = 2*(height+width);
 int sol2 = height * width;
 printf("Perimeter of the Rectange = %d inches.\n",sol);
 printf("Area of the Rectange = %d square inches.\n",sol2);
 return 0;
}

