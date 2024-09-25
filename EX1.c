// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
int age;
char name[50];
char prenom[43];
char adreesse_email[54];
char sexe [12];
printf("saisir le nom:");
scanf("%s",name);
printf("enter le prenom:");
scanf("%s",prenom);
printf(" entrer adresse_email:");
scanf("%s",adreesse_email);
printf("saisir le sexe:");
scanf("%s",sexe);
printf("veulliez votre age:");
scanf("%d",& age);

printf("name: %s\n",name);
printf("prenom: %s\n",prenom);
printf("age: %d\n",age);
printf("sexe :%s\n",sexe);
printf("adresse email: %s",adreesse_email);
    return 0;
}