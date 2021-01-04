/*chapter 4-2*/
#include <stdio.h>
#include <string.h>
int main(void) {
    printf("Enter your first name:");
    char first[40];
    int first_len;
    scanf("%s",first);
    first_len=strlen(first);
    printf("a: \"%s\"\n",first);
    printf("b: \"%20s\"\n",first);
    printf("c: \"%-20s\"\n",first);
    printf("d: \"%*s\"\n", first_len + 3, first);
    
    return 0;
}
  
