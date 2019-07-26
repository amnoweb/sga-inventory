#include <stdio.h> 
int main (void) {
    int id;
    printf ("Enter your 6-digit student ID.\n");
    scanf ("%d", id);
    if (id < 100000) {
        printf("Invalid ID, make sure that you are entering the 6-digit form.\n");
        return 0;
    }
    char firstName[20];
    printf("Enter first name: ");
    scanf("%s", name);
    char lastName[20];
    printf("Enter last name: ");
    char lastName[20];
    int object;
    printf ("Enter object code : ");
    scanf ("%d", object);
    if (object < 0) {
        printf("Invalid object code, make sure that you are entering the number on the red sticker.");
        return 0;
    }
    return 0;
}
