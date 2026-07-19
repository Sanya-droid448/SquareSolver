# SquareSolver
Program for Solving Quadratic Equations Using the Discriminant
#include<stdio.h>
#include<math.h>
#include <string.h>
int main(){
double coef_a=0, coef_b=0, coef_c=0, D=0;
double x1,x2;
int choise;
while (1)  {
printf("1.Solve a quadratic equation.\n");
printf("2. View the discriminant formula\n");
printf("3. Exit") ;
printf("\n Your choise: ");
scanf("%d", &choise);
   switch (choise) {
    case 1:   
printf("\n Enter the coefficients a, b, and c.:\n");  
    if (scanf("%lf %lf %lf", &coef_a, &coef_b, &coef_c) != 3) {
    printf("You need to enter three numbers.!\n");
    continue;
}


if (coef_a==0) {
    printf("This is not a quadratic equation!\n");
    continue;
}
D= coef_b * coef_b - 4*coef_a*coef_c;
printf("The discriminant is equal to: %.2lf\n", D);
if ( fabs(D) < 1e-9) {
    x1 = (-coef_b + sqrt(D)) / ( 2 * coef_a);
    printf("x1= %.2lf", x1);
    
}
    
    else if ( D>0) {
     x1 = (-coef_b + sqrt(D)) / ( 2 * coef_a);
     x2=(-coef_b - sqrt(D)) / ( 2 * coef_a);
        printf("x1=%.2lf, x2=%.2lf\n", x1, x2);
    }
      else if (D<0) {
          printf("There are no real solutions..\n");
      }
      break;
 case 2:
 printf("D= b²-4ac\n");
 
 break;
 
 case 3:
 printf("Bye!\n");
 return 0;
 
 default:
    printf("Wrong choise!\n");
    break;
return 0;


}
          
}
return 0;
}
