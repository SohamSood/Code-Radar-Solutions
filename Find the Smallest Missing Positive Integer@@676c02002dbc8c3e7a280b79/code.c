#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*4);
    for(int p = 0;p<a;p++) {
        scanf("%d",&myarr[p]);
    }
    int min=myarr[0];
    for(int i =0;i<a;i++) {
        if(min>myarr[i]) {
            min = myarr[i];
        }
    }
    int max=myarr[0];
    for(int i =0;i<a;i++) {
        if(max<myarr[i]) {
            max = myarr[i];
        }
    }
    // printf("%d %d",max,min);
    for(int i = min;i<=max;i++) {
        int e = 0;
        for(int j = 0;j<a;j++) {
            if(myarr[j] == i) {
                // printf("%d",i);
                e++;
            }
        }
        if(e == 0) {
            printf("%d ",i);

        } else {
            int r=0;
        }
    }
}