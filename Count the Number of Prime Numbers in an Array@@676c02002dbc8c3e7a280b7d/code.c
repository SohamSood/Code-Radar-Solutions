#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*sizeof(int));
    for (int u=0;u<a;u++) {
        scanf("%d",&myarr[u]);
    }
    int cout = 0;
    for(int i = 0;i<a;i++) {
        int e= 0;
        if(myarr[i] == 0 || myarr[i] == 1) {
            e++;
        }
        for(int j = 2;j<myarr[i];j++) {
            if(myarr[i]%j == 0) {
                e = e+1;
            }
        }

        if(e == 0) {
            cout++;
        }
    }
    printf("%d",cout);
}