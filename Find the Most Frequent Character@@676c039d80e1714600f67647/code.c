#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    fgets(a,sizeof(a),stdin);
    int maxx=0;
    char num;
    for(int i = 0;i<strlen(a);i++) {
        int count = 0;
        char num2 = a[i];
        for(int j=0;j<strlen(a);j++) {
            if((i!=j) && (a[i] == a[j])) {
                count++;
            }
        }
        if(count>maxx) {
            maxx = count;
            num = a[i];
        } else if (count == maxx) {
            if(a[i]<num) {
                num = a[i]; 
            }
        // } else if(count == 0) {
        //     if(a[i]<num) {
        //         num = a[i];
        //     }
        // }
    }
    printf("%c",num);
}