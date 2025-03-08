// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()  {
    char a[100];
    fgets(a,sizeof(a),stdin);
    for(int i =0;i<strlen(a);i++) {
        if((a[i] >= 65) && (a[i] <= 90)) {
            a[i] = tolower(a[i]);
        }
        
    }
}