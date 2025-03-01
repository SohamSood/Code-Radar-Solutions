#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*4);
    for(int p = 0;p<a;p++) {
        scanf("%d",&myarr[p]);
    }
    // int min=myarr[0];
    // for(int i =0;i<a;i++) {
    //     if(min>myarr[i]) {
    //         min = myarr[i];
    //     }
    // }
    int max=myarr[0];
    for(int i =0;i<a;i++) {
        if(max<myarr[i]) {
            max = myarr[i];
        }
    }
    for(int i = 0;i<max;i++) {
        int e = 0;
        for(int j = 0;j<a;j++) {
            if(myarr[j] == i) {
                e++;
            }
        }
        if(e == 0) {
            int r = 0;

        } else {
            printf("%d",i);
        }
    }
}