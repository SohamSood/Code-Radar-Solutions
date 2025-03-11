#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student {
    char name[100];
    char plan[100];
    float marks;
};
int main() {
    int a;
    scanf("%d",&a);
    struct student *students = (struct student*)malloc(a*sizeof(struct student));
    for(int i = 0;i<a;i++) {
        scanf("%s %s %f",students[i].name,students[i].plan,&students[i].marks);
    }
    float basic = 0; 
    float standard = 0;
    float premium = 0;
    int ubasic = 0;
    int ustandard = 0;
    int upremium = 0;
    for(int i = 0;i<a;i++) {
        if((strcmp(students[i].plan,"Basic")) == 0) {
            basic = basic + students[i].marks;
            ubasic++;
        }
        else if((strcmp(students[i].plan, "Standard")) == 0) {
            standard = standard + students[i].marks;
            ustandard++;
        }
        else if((strcmp(students[i].plan, "Premium")) == 0) {
            premium = premium + students[i].marks;
            upremium++;
        }
    }
    printf("Basic: %d Users, Revenue: %.2f; Standard: %d Users, Revenue: %.2f; Premium: %d Users,Revenue: %.2f",basic,ubasic,standard,ustandard,premium,upremium);
}