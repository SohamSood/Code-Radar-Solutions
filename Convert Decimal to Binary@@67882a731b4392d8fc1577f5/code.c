// Your code here...
#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int count = 0;
    for (int i = 31; i >= 0; i--) {
        int b =  (a >> i) & 1;
        if(b == 0 && count == 0) {
            int y = 0;
        }else {
            printf("%d", (a >> i) & 1);
            count++;
        }
    }
}