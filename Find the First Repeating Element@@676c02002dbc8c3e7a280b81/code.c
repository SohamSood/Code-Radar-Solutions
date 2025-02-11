#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    for(int i = 0;i<j;i++) {
        scanf("%d",&myarr[i]);
    }
    int e = 0
    for(int i = 0;i<a;i++) {
        for(int j = 0;j<a;j++) {
            if((i != j) || (e == 0)) {
                if(myarr[i] == myarr[j]) {
                    printf("%d",myarr[i]);
                    e++;
                }
            }
        }
    }
}