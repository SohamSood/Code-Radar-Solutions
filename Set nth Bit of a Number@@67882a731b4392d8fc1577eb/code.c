// Your code here...
#include <stdio.h>
int main() {
    int a;
    int b;
    scanf("%d %d",&a,&b);
    printf("%u",a | (1U << b));
}