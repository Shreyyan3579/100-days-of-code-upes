#include <stdio.h>
int main(){
    int num;
    int binary = 0;
    int base = 1;
    int rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0){
        rem = num % 2;
        binary = binary + rem * base;
        num = num / 2;
        base = base * 10;
    }
    printf("Binary representation: %d\n", binary);
    return 0;
}
