#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Declaration
    char initial1;
    char initial2;
    char initial3;
    int quarter;
    int dime;
    int nickel;
    int penny;
    float qproduct;
    float dproduct;
    float nproduct;
    float pproduct;
    float qdsum;
    float npsum;
    float grandtotal;
    int dollars;
    float cents;


    //Request and input initials
    printf("Enter your initials, first, middle and last:");

    //Collecting initials input
    scanf("%c", &initial1);
    scanf("%c", &initial2);
    scanf("%c", &initial3);
    printf ("\n");

    //Reciting initials output
    printf("Hello %c.%c.%c.", initial1, initial2, initial3); printf(", let's see how much your coins are worth.");
    printf ("\n");

    //Requesting and collecting input of coins
    printf("Enter number of quarters:");
    scanf("%d", &quarter);
    printf("Enter number of dimes:");
    scanf("%d", &dime);
    printf("Enter number of nickels:");
    scanf("%d", &nickel);
    printf("Enter number of pennies:");
    scanf("%d", &penny);
    printf ("\n");


    //Reciting each number of coins input
    printf("Number of quarters is %d.", quarter);
    printf ("\n");
    printf("Number of dimes is %d.", dime);
    printf ("\n");
    printf("Number of nickels is %d.", nickel);
    printf ("\n");
    printf("Number of pennies is %d.", penny);
    printf ("\n");
    printf ("\n");


    //Calculating/Counting Coins
    qproduct = (quarter * 25);
    dproduct = (dime * 10);
    nproduct = (nickel * 5);
    pproduct = (penny * 1);

    //Adding Coin Value Together
    grandtotal = (qproduct + dproduct + pproduct + nproduct);


    //Producing the dollar and cent amount
    dollars = (grandtotal / 100);
    cents = (grandtotal - (dollars * 100));


    //Final Output in dollars and cents
    printf("Your coins are worth %d", dollars); printf(" dollars and %.0f", cents); printf(" cents.");


    return 0;
}
