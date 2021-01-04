/*chapter 4-5*/
#include <stdio.h>
int main(void) {
    const float BITS_PER_BYTE=8;
    float download_speed_Mps;
    float file_size_MB;
    
    printf("Enter downlaod speed(in megabits/second): ");
    scanf("%f",&download_speed_Mps);
    printf("Enter a file size(in megabytes): ");
    scanf("%f",&file_size_MB);
    printf("At %.2f megabits per second, a file of %.2f downloads in %.2f seconds.\n",download_speed_Mps, file_size_MB, file_size_MB/download_speed_Mps*BITS_PER_BYTE);
    
    return 0;
}

