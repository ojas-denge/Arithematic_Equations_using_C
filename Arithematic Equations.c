#include <stdio.h>
int main () {
    
    int n1, n2, n3, n4;
    
    n1 = 5 * 2 - 2 * 3;
    n2 = 5 * 2 / 2 * 3;
    n3 = 5 *(2 / 2)* 3;
    n4 = 5 + 2 / 2 * 3;
    
    printf("The value of equations are:\n");
    
    printf("The value of 5 * 2 - 2 * 3 =%d \n", n1);
    printf("The value of 5 * 2 / 2 * 3 =%d \n", n2);
    printf("The value of 5 *(2 / 2)* 3 =%d \n", n3);
    printf("The value of 5 + 2 / 2 * 3 =%d \n", n4);
    
    return 0;
}