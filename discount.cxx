#include <stdio.h>

int main() {
    float purchase_amount, discount, final_amount;

    printf("Enter purchase amount: ");
    scanf("%f", &purchase_amount);

    if (purchase_amount > 5000) {
        discount = purchase_amount * 0.10;
        printf("Discount: %f\n", discount);
    }

    final_amount = purchase_amount - discount;
    printf("Final amount: %f", final_amount);

    return 0;
}
	