//function to call electric bill
#include <stdio.h>

// Function to calculate electric bill
	float calculateElectricBill
   (float kWh) {
    float rate = 0.50;
    float bill = kWh * rate;
    return bill;
}

int main() {
    float kWh, bill;

    // Input from the user
    printf("Enter the number of kilowatt-hours used: ");
    scanf("%f", &kWh);

    // Calculate the bill using the function
    bill = calculateElectricBill(kWh); // Function call

    // Output the result
    printf("The total electric bill is: ksh %.2f\n", bill);

    return 0;
}