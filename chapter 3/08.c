/*chapter3-8*/
#include <stdio.h>
int main(void) {
    
    float cup;
    float pint;
    float ounce;
    float tbsp;
    float tsp;
    
    printf("Enter a volume (in cups): ");
    scanf("%f",&cup);
    pint=cup/2;//a pint is 2 cups->cup=2*pint
    ounce=8*cup;//a cup is 8 ounces
    tbsp=2*ounce;//an ounce is 2 tablespoons
    tsp=3*tbsp;//a tablespoon is 3 teaspoons
    printf("%f cups equals %f pints\n",cup, pint);
    printf("%f cups equals %f ounces\n",cup, ounce);
    printf("%f cups equals %f tablespoons\n",cup, tbsp);
    printf("%f cups equals %f teaspoons\n",cup, tsp);
    
    return 0;
}
