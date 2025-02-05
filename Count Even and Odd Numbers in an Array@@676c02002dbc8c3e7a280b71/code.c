#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a * (sizeof(int)));
    for (int p = 0;p<a;p++) {
        scanf("%d",&myarr[p]);

    }
    printf("%d",myarr[0]);
}