// Your code here...
#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*4);
    for(int p =0;p<a;p++) {
        scanf("%d",&myarr[p]);
    }
    int streak = 0;
    for(int j=0;j<a;j++) {
        int count = 0;
        for(int i = j+1;i<a-1;i++) {
            if(myarr[j]>myarr[i]) {
                count++;
            } else {
                break;
            }
            if(count>streak) {
                streak = count;
            }
        }
    }
    printf("%d",streak);
}