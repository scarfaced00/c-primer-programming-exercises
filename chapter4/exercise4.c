/*chapter 4-4*/
#include <stdio.h>
//inch to foot
int main(void) {
    const float INCHES_PER_FEET =12;
    float height;
    char name[40];
    printf("Enter your height in inches:");
    scanf("%f",&height);
    printf("Enter your name:");
    scanf("%s",name);
    printf("%s, you are %.3f feet tall\n",name,height/INCHES_PER_FEET);
    
    return 0;
}

//cm to m
int main(void) {
    const float CENTIMETERS_PER_METER =100;
    float height;
    char name[40];
    printf("Enter your height in cm:");
    scanf("%f",&height);
    printf("Enter your name:");
    scanf("%s",name);
    printf("%s, you are %.3f feet tall\n",name,height/CENTIMETERS_PER_METER);
    
    return 0;
}
