# include <stdio.h>

void swap_call_by_value(int a, int b) {
    int temp;
    printf("\nBefore swapping a = %d, b=%d", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping a = %d, b=%d", a, b);
}

void swap_call_by_reference(int *a, int *b) {
    int temp;
    printf("\nBefore swapping a = %d, b=%d", *a, *b);
    temp = *a;  
    *a=*b;  
    *b=temp; 
    printf("\nAfter swapping a = %d, b = %d", *a, *b);
}
