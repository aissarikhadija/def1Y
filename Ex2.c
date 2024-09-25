#include <stdio.h>

int main() {
    const float T=273.15;
    float C,k;
    printf("saisir la valeur de la temperature en celsuis:");
    scanf("%f",&C);
    k=C + T;
    printf(" transformer la temperature celsuis en kelvin:%f ",k);


    return 0;
}