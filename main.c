#include <stdio.h>

int main() {

    // Collect data
    int item_number,dd,mm,yyyy;
    float unit_price;
    printf("Enter item number : ");
    scanf("%d",&item_number);
    printf("Enter unit price: ");
    scanf("%f",&unit_price);
    printf("Enter purchase date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d",&mm,&dd,&yyyy);

    // Print everything
    printf("Item\t\tUnit\t\tPurchase\n"
           "\t\tPrice\t\tDate\n"
           " %-d\t\t$%6.2f\t\t%-d/%-d/%-d\n",item_number,unit_price,mm,dd,yyyy);

    return 0;
}
