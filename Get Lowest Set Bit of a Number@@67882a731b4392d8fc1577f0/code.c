#include <stdio.h>

int main() {
    int a, b = 0;
    scanf("%d", &a);
    
    while ((a & 1) == 0 && a != 0) {
        b++;
        a >>= 1;
    }

    printf("%d\n", b);
    return 0;
}
