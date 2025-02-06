#include <stdio.h>
int main(a) {
    if(a%2 == 0) {
        for(int i = 0;i<a;i++) {
            printf("0 1 ");
        }
    } else if(a == 1) {
        printf("1");
    } else {
        for(int j = 0;j<a;j++) {
            printf("1 0 ");
        }
    }
}
int main() {
    int a;
    scanf("%d",&a);
    for(int i = 0;i<a;i++) {
        main(i);
        printf("\n");
    }
}