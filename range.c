#include<stdio.h>
 
int main() {
    int n, min, max;
     
    printf("Enter an integer\n");
    scanf("%d", &n);
    printf("Enter the minimum and maximum range\n");
    scanf("%d %d", &min, &max);
     
    if((n-min)*(n-max) <= 0){
        printf("%d is in range of [%d, %d]", n, min, max);
    } else {
     printf("%d is not in range of [%d, %d]", n, min, max);
    }
 
    return 0;
}