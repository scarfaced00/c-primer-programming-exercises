/*chapter3-7*/
#include <stdio.h>
//1 inch->cm
int main(void) {
    
    float cm_per_inch=2.54;
    float height;
    
    printf("Enter your height(inches): ");
    scanf("%f",&height);
    printf("You are %f cm tall\n", height*cm_per_inch);
    
    return 0;
}
//2 cm->inch
int main(void) 
{
    float height; //in cm
    float inch_per_cm=0.393701;
    
    printf("Enter your height (in cm): ");
    scanf("%f",&height);
    printf("You are %f inches tall\n",height*inch_per_cm);
    
    return 0;
    
}
