#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    int e = 0;
    int max;
    scanf("%d",&a);
    int *myarr=malloc(a * (sizeof(int)));
    for (int p =0;p<a;p++) {
        scanf("%d",&myarr[p]);
    }
    for(int i = 0;i<a;i++) {
        if((i == 0)) { 
            if(myarr[0] > myarr[1]) {
                printf("%d",&myarr[o]);
            }
        }
    }
}