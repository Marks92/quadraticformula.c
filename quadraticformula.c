// CS 153 PROGRAM ASSIGNMENT #1 
// 
// Program that calculates the quadratic formula
// based on numbers provided for a, b, and c of the
// formula. Output for the user is the result.
// 
// Mark Schuberth 
// 
// 9/9/2018 

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
  double a, b, c, root1, root2, discriminant;
  
  printf("\n");
  printf("This program prints the roots of the quadratic equation!\n");
  printf("--------------------------------------------------------\n");
  
  printf("Enter a value for a: ");
  scanf("%lf",&a);
  
  printf("Enter a value for b: ");
  scanf("%lf",&b);
  
  printf("Enter a value for c: ");
  scanf("%lf",&c);
  
  if( a == 0.0 && b == 0.0)
  {
   printf("Error finding roots, please try again!\n");
  }
  else if( a == 0.0)
  {
   root1 = -c/b;
	
	  printf("The result is linear and the root is: %lf ", root1);
  }
  else
  {
    discriminant = b*b-4*a*c;
    if(discriminant < 0.0)
    {
     printf("No real solutions");
    }
    else if(discriminant == 0.0)
    {
     root1 = -b/(2*a);
     printf("One solution: x = %lf", root1);
    }
    else
    {
     root1 = (-b+sqrt(discriminant))/(2*a);
     root2 = (-b-sqrt(discriminant))/(2*a);
     printf("Two solutions: x = %lf and x = %lf",root1, root2);
    }
  }
  
  return 0;
}