#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a * (sizeof(int)));
    for (int p = 0;p<a;p++) {
        scanf("%d",&myarr[p]);
    }
    int b = 0;
    int c = 0;
    for(int j=0;j<a;j++){
        if((myarr[j]%2) == 0) {
            b++;
        } else {
            c++;
        }
    }
    printf("%d %d",b,c);
}