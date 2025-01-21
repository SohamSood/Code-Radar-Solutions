#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if (a<0) {
        printf("Negetive");
    }
    if (a>0) {
        printf("Positive");
    }
    if ( a== 0) {
        printf("Zero");
    }
}