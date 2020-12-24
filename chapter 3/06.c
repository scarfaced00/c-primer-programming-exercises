/*chapter3-6*/
#include <stdio.h>

int main() {
    
    float mol_water=3.0e-23;
    float grams_H2O_per_qrt=950.;
    /*when converting floating-point values to integers, C
simply throws away the decimal part ( truncation ) instead of rounding*/
    float amt_water;
    
    printf("Enter an amount of water in quarts: ");
    scanf("%f",&amt_water);
    printf("There are %f molecules in %f quarts of water.\n",(amt_water*grams_H2O_per_qrt)/mol_water, amt_water);
    
    return 0;
}
  
