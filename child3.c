#include <stdio.h>
#include <unistd.h>
int main() 
{ 
    int mod1 = fork(); 
    int mod2 = fork(); 

    if (mod1 > 0 && mod2 > 0) { 

        printf("parent\n"); 

        printf("%d %d \n", mod1, mod2); 

        printf(" parent id is %d \n", getpid()); 

    } 

    else if (mod1 == 0 && mod2 > 0) 

    { 

        printf("First child\n"); 

        printf("%d %d \n", mod1, mod2); 

        printf("my id is %d  \n", getpid()); 

    } 

    else if (mod1 > 0 && mod2 == 0) 

    { 

        printf("Second child\n"); 

        printf("%d %d \n", mod1, mod2); 

        printf("my id is %d  \n", getpid()); 

    } 

    else { 

        printf("third child\n"); 

        printf("%d %d \n", mod1, mod2); 

        printf(" my id is %d \n", getpid()); 

    } 

    return 0; 
} 