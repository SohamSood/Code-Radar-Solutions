#include <stdio.h>
#include <stdlib.h>


int main() {
    int a,b,c;
    int e = 0;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    for (int p = 0;p<a;p++ ) {
        scanf("%d",&myarr[p]);
    }
    scanf("%d",&b);
    for(int j = 0;j<a;j++ ) {
        if(myarr[j] == b) {
            printf("%d",j);
            e = e+1;
            break;
        }
    if(e != 0) {
        break;
    }

    }
    if ( e == 0) {
        int l = -1;
        printf("%d",l);
    }


}