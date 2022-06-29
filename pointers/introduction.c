#include <conio.h>
#include <stdio.h>


void main() {
    int x = 5, *j;
    j = &x;
    printf("%d \t %u\n", x,j);
    printf("%d \t %u\n", *j,&x);
    printf("%u\n", *&j);
    printf("%u",j+1);
    }