/*chapter 4-7*/
#include <stdio.h>
#include <float.h>
int main(void) {
    double db_one_third=1.0/3.0;
    float ft_one_third=1.0/3.0;
    printf("Float                Double          \n");
    printf("%-20.4f %-20.4f\n",ft_one_third, db_one_third);// show 4 digits
    printf("%-20.12f %-20.12f\n",ft_one_third, db_one_third);// show 12 digits
    printf("%-20.16f %-20.16f\n",ft_one_third, db_one_third);// show 16 digits
    printf("FLT_DIG: %d DBL_DIG: %d",FLT_DIG, DBL_DIG);
     
    return 0;
}


