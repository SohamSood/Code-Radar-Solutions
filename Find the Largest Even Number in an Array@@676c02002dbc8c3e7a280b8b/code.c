#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%a",&a);
    int *myarr = malloc(a*(sizeof(int)));
    int max = 0;
    for(int p = 0;p<a;p++) {
        if ((myarr[i])%2 == 0) {
            if(myarr[i]>max) {
                max = myarr[i];
            }
        }
    }
    printf("%d",max);
}