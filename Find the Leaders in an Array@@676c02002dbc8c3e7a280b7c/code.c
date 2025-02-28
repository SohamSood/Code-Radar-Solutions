#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    for(int p = 0;p<a;p++) {
        scanf("%d",&myarr[p]);
    }
    for(int i = 0;i<a;i++) {
        int e = 0;
        for(int j = i+1;j<a-1;j++) {
            if(myarr[i]>myarr[j]) {
                e++;
            }
        }
        if(e == (a-i)) {
            printf("%d ",myarr[i]);
        }
    }
}