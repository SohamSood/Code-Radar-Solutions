#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    for (int i =0;i<a;i++) {
        scanf("%d",&myarr[i]);
    }
    int f = 0;
    for(int k = 0;k<a;k++) {
        for(int j = 1;j<a;j++) {
            if(k != j) {
                if(myarr[k] == myarr[j]) {
                    if(f == 0) {
                        f = f+myarr[k];
                        printf("%d",f);
                        break;
                    }
                }
            }
        }
    }    
}