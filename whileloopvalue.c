#include<stdio.h>
//while loop take value form user
int main () {
    int n;
    printf("enter the value :");
    scanf("%d" , &n);

    int i = 0;
    while(i<=n) {
        printf("%d\n" , i);
        i++;
    }
    
}
    