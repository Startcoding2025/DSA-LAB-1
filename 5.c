//C program to swap two numbers using a temporary variable

#include <stdio.h>

int main () {
    int a , b , temp ;

    printf("Enter two numbers : ");
    scanf("%d %d" , &a , &b);

    temp = a ;
    a = b ;
    b = temp ;

    printf("After swapping , first number = %d , second number = %d" , a , b );
    return 0 ;
}