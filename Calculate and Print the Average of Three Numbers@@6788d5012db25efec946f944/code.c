#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int e = (a+b+c);
    float f = e/3;
    printf("Average: %.2f",f);
}