#include <stdio.h>
#include <math.h>

/*
*Name : Hoyoung Jung
*/

int main()
{
    double L;       /* Inductance (millihenrys) */
    double C;       /* Capacitance (microfarads) */
    double w_c;   	/* Resonance frequency (radians per second) */
    double f;       /* Resonance frequency (Hertz) */

    printf("Enter Capacitance (microfarads): ");
    scanf("%lf", &C);
    printf("Enter Inductance (millihenrys): ");
    scanf("%lf", &L);

    w_c = 1.0 / sqrt((C / 1000000) * (L / 1000));
    f = w_c / (2 * M_PI);
    printf("Resonant frequency: %.3f\n", f);

}
