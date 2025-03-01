#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    int *myarr2 = malloc(a*(sizeof(int)));
    for(int p =0;p<a;p++) {
        scanf("%d",&myarr[p]);
    }
    for(int i = 0;i<a;i++) {
        b = myarr[i];
        int count = 0;
        for(int j = 0;j<a;j++) {
            if(b == myarr[j]) {
                count++;
            }
        }
        printf("%d %d \n",b,count);
    }
}
