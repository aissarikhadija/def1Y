#include <stdio.h>

int main() {
    const double F=1093.61;
    double  km, yards;
    printf("saisir la valeur de la distance en kilometre: ");
    scanf("%lf",&km);
    yards=km*F;
    printf("trnsformer la distance kilometre en yards est:l %.2lf\n",yards);


    return 0;
}