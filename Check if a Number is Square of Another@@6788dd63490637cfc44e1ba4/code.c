#include <stdio.h>


int main() {
    int m,n;
    scanf("%d %d",&n,&m);
    if ( (m*m) == n) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}