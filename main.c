#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    double coef_a = 0, coef_b = 0, coef_c = 0, Discr = 0;
    double solut_1 = 0, solut_2 = 0;
    int choice;
    int num_argum_read = 0;
    while (1)
    {
        printf("1.Solve a quadratic equation.\n");
        printf("2. Exit\n") ;
        printf("\n Your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            printf("\n Enter the coefficients a, b, and c.:\n");
            num_argum_read = scanf("%lf %lf %lf", &coef_a, &coef_b, &coef_c );
            if (num_argum_read != 3)
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
            Discr = coef_b * coef_b - 4 * coef_a * coef_c;
            printf("The discriminant is equal to: %.2lf\n", Discr);
            if (fabs(Discr) ==0)
            {
                solut_1 = (-coef_b + sqrt(Discr)) / ( 2 * coef_a);
                printf("x1= %.2lf\n", solut1);

            }

            else if (Discr>0)
            {
                solut_1 = (-coef_b + sqrt(Discr)) / ( 2 * coef_a);
                solut_2=(-coef_b - sqrt(Discr)) / ( 2 * coef_a);
                printf("x1=%.2lf, x2=%.2lf\n", solut_1, solut_2);
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
