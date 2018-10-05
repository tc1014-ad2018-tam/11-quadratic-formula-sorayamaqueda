/*
 * This program is useful for calculating the roots of a quadratic equation. It asks the user to introduce the values of
 * a, b and c. Then it verifies that the introduced values are numbers, otherwise it let them knows if not.
 * Afterwards, it uses the discriminant to determine the nature of the roots. The discriminant is a simple formula which
 * allows you to determine beforehand whether the values introduced will produce one or two real roots, or none at all.
 *
 * Author: Soraya Lizeth Maqueda Gutiérrez
 * Date: 03.10.2018
 * Contact: soraya_maqueda@hotmail.com
 */
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double a;
    char ay[100];
    char *trashAy;
    double b;
    char bee[100];
    char *trashBee;
    double c;
    char cee[100];
    char *trashCee;
    double xone;
    double xtwo;
    double discriminant;

    //Here I ask the user to introduce the values for a, b and c.
    printf("Enter a: \n");
    fgets(ay, sizeof(ay),stdin);

    printf("Enter b: \n");
    fgets(bee, sizeof(bee),stdin);

    printf("Enter c: \n");
    fgets(cee, sizeof(cee),stdin);

    a = strtod(ay, &trashAy);
    b = strtod(bee, &trashBee);
    c = strtod(cee, &trashCee);

    discriminant = ((pow(b,2.0)) - (4.0 * a * c));

    if (a != 0.0 && discriminant > 0.0) {

        xone = (-b + sqrt(((pow(b,2.0)) - (4.0 * a * c)))) / (2.0 * a);
        xtwo = (-b - sqrt(((pow(b,2.0)) - (4.0 * a * c)))) / (2.0 * a);

        printf("Root 1: %lf\n", xone);
        printf("Root 2: %lf\n", xtwo);
    } else {
        if (a != 0.0 && discriminant == 0.0){
            xone = (-b) / (2.0 * a);
            xtwo = xone;

            printf("There is only one real root.");
            printf("x = %lf", xtwo);

        } else {

            if (a != 0.0 && discriminant < 0.0) {
                printf("Both roots are imaginary.");

            }
        }
    }


    return 0;
}