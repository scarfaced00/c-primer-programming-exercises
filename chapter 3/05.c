/*chapter 3-5*/

#include <stdio.h>

int main() {
    unsigned int age;
    unsigned int sec_year=31560000; //seconds in a year;
    
    printf("Enter your age: ");
    scanf("%u",&age);
    printf("You are %u seconds old!\n",age*sec_year);
    
    return 0;
}
 
