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
            if(myarr[i] > myarr[i+1]) {
                printf("%d",&myarr[0]);
                e++;
            }
        } else if (i == a-1) {
            if(myarr[i] > myarr[i-1]) {
                printf("%d",myarr[i]);
                e++;
            }
        } else  {
            if((myarr[i]>myarr[i+1])&&(myarr[i]>myarr[i-1])) {
                printf("%d",myarr[i]);
                e++;
                break;
            }
        }

    }
    if(e == 0) {
        printf("-1");
    }
}