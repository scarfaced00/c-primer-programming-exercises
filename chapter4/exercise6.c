/*chapter 4-6*/
#include <stdio.h>
#include <string.h>
int main(void) {
    char first[40];
    char last[40];
    
    printf("Enter your first name and last name: ");
    scanf("%s %s",first,last);
    printf("%s %s\n",first,last);
    printf("%*lu %*lu\n",(int)strlen(first),strlen(first),(int)strlen(last),strlen(last));
    printf("%s %s\n",first,last);
     printf("%-*lu %-*lu\n",(int)strlen(first),strlen(first),(int)strlen(last),strlen(last));
     
    return 0;
}

