# price-calculator-
for small shop owners who have to deal with quality and price that sometimes can be so overwhelming. 
# Quantity Converter

This C program provides functionality to convert between grams and bill amounts. Users can input either the quantity in grams to calculate the bill or input the bill amount to find out the corresponding quantity in grams.

## Functions

### `gram_2_bill()`

This function converts grams to the corresponding bill amount. Users are prompted to enter the quantity of the product in grams and the price per kilogram.

```c
void gram_2_bill()
{
    printf("\nEnter the amount (in grams) of the product: ");
    float quantity, price_1kg, one_unit_price;
    scanf("%f", &quantity);

    printf("\nEnter the price of 1kg: ");
    scanf("%f", &price_1kg);

    one_unit_price = price_1kg / 1000;

    printf("\nYour bill: %.2f", one_unit_price * quantity);
}
