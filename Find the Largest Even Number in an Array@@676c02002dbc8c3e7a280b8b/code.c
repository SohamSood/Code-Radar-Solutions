#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    for(int p = 0;p<a;p++) {
        scanf("%d",&myarr[p]);
    }
    int max = INT_MIN;
    for(int i = 0;i<a;i++) {
        if ((myarr[i])%2 == 0) {
            if(myarr[i]>max) {
                max = myarr[i];
            }
        }
    }
    if(max != INT_MIN) {
        printf("%d",max);
    } else {
        printf("-1");
    }
}