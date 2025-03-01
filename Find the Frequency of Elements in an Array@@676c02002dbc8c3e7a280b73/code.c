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
    int size = 0;
    for(int i = 0;i<a;i++) {
        int b = myarr[i];
        int e = 0;
        for(int k = 0; k<size;k++) {
            if(b == myarr2[k]) {
                e++;
            }
        }
        
        myarr2[i] = b;
        size++;
        if(e == 0) {
            int count = 0;
            for(int j = 0;j<a;j++) {
                if(b == myarr[j]) {
                    count++;
                }
            }
            printf("%d %d \n",b,count);
        }
        
    }
    
}
