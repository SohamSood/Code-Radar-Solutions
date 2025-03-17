// Your code here...
#include <stdio.h>

int main() {
    unsigned int a;
    scanf("%u", &a);
    printf("%d", a ? __builtin_ctz(a) : 32);
    return 0;
}
