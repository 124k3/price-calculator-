#include<stdio.h>

void gram_2_bill()
{
    printf("\nenter the amount(g) of the product : ");
    float quantity, price_1kg, one_unit_price;
    scanf("%f", &quantity);
    printf("\nenter the price of 1kg : ");
    scanf("%f", &price_1kg);
    one_unit_price = price_1kg / 1000;
    printf("\nyour bill : %.2f", one_unit_price *quantity);
}

void bill_2_gram()
{
    printf("\nenter the price/bill : ");
    float bill_price, price_1kg, number_of_grams;
    scanf("%f", &bill_price);
    printf("\nenter the price of 1kg : ");
    scanf("%f", &price_1kg);
    number_of_grams = 1000 / price_1kg; //gives the number of grams we can buy.
    printf("\nquantity : %.2f(g)", bill_price * number_of_grams);
}
void main()
{
    bill_2_gram();
    //bill 2 gram e.g for 510 how much to give

    //gram_2_bill();
}