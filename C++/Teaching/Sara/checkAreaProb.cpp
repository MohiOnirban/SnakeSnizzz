#include <stdio.h>
 
 int main (){
   int area;
   float length , width ;
  printf (" Choose which area do you want to calculate :\n1-triangle \n2.square \n3.rectanle \n4.parallelogram \nyour choice is: ");
  scanf (" %d",&area);

  switch(area)
  {
  case 1:
    printf ("Enter the base and height of the triangle : ");
    scanf ("%f %f",&length,&width);
    printf ("The area of the triangle is: %.2f", length*width*.5);
    break;
  case 2:
    printf ("Enter the height of the Square : ");
    scanf ("%f",&length);
    printf ("The area of the triangle is: %.2f", length*length);
    break;
  case 3:
    printf ("Enter the Widgth and height of the Rectangle : ");
    scanf ("%f %f",&length,&width);
    printf ("The area of the triangle is: %.2f", length*width);
    break;
  case 4:
    printf ("Enter the base and height of the Parallalogram : ");
    scanf ("%f %f",&length,&width);
    printf ("The area of the triangle is: %.2f", length*width);
    break;
  
  default:
    break;
  }
}