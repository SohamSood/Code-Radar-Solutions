#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    for(int i = 0;i<a;i++) {
        scanf("%d",&myarr[i]);
    }
    int e = 0;
    for(int k = 0;k<a;k++) {
        for(int j = 0;j<a;j++) {
            if((k != j) && (e == 0)) {
                if(myarr[k] == myarr[j]) {
                    printf("%d",myarr[k]);
                    e++;
                }
            }
        }
    }
    if(e == 0) {
        printf("-1");
    }
}