#include <stdio.h>
#include <limits.h>

#include <stdlib.h>


int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a *(sizeof(int)));
    for (int l = 0;l<a;l++) {
        scanf("%d",&myarr[l]);
    }
    int diff = 0;
    int last,forst;
    for(int i = 0;i<a;i++) {
        for(int j = 0;j<a;j++) {
            if(i!=j) {
                c = myarr[i] - myarr[j];
                if(c<0) {
                    c = c*(-1);
                }
                if(c < diff) {
                    diff = c;
                    last = i;
                    first = j;
                }
            }
        }
    }
    printf("%d %d",last,first);
}
