    #include<stdio.h>
    #include<math.h>
    #include <string.h>


    int main()
    {
    double coef_a = 0, coef_b = 0, coef_c = 0, D = 0;
    double solut1, solut2;
    int choice;
    int numargumread = 0;
    while (1)
    {
    printf("1.Solve a quadratic equation.\n");
    printf("2. Exit\n") ;
    printf("\n Your choice: ");
    scanf("%d", &choice);
   switch (choice)
   {
    case 1:
    printf("\n Enter the coefficients a, b, and c.:\n");
   numargumread= scanf("%lf %lf %lf", &coef_a, &coef_b, &coef_c );
    if (numargumread != 3)
   {
    printf("You need to enter three numbers!\n");
    continue;
   }


   if (coef_a==0)
 {
    double lineequat = -coef_c / coef_b;
    printf("x=%lf\n",lineequat);
    if (coef_c==0)
    {
        printf("The equation has no roots.\n");
    continue;
    }
  }
  D = coef_b * coef_b - 4 * coef_a * coef_c;
    printf("The discriminant is equal to: %.2lf\n", D);
    if ( fabs(D) ==0)
    {
    solut1 = (-coef_b + sqrt(D)) / ( 2 * coef_a);
    printf("x1= %.2lf\n", solut1);

    }

    else if ( D>0)
     {
     solut1 = (-coef_b + sqrt(D)) / ( 2 * coef_a);
     solut2=(-coef_b - sqrt(D)) / ( 2 * coef_a);
        printf("x1=%.2lf, x2=%.2lf\n", solut1, solut2);
    }
      else
       {
          printf("There are no real solutions.\n");
      }
      break;



   case 2:
   printf("Bye!\n");
    return 0;

    default:
    printf("Wrong choice!\n");
    break;



    }

 }
    return 0;
    }
