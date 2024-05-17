#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main() {
    char cardnum[100];
    printf("Enter a card number\n");
    fgets(cardnum,100,stdin);
    if (isdigit(cardnum[0])) {
        int firstdig = cardnum[0] - '0';
        if(firstdig == 3) {
            printf("This card is an Amex\n");
        } else if(firstdig == 4) {
            printf("this card is a Visa\n");
        } else if(firstdig ==5) {
            printf("This card is a Mastercard");
        }
    }


    return 0;
}
