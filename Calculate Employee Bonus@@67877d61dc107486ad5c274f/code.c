// Your code here...
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student {
    int rollno;
    char name[100];
    float marks;
};
int main() {
    int a;
    scanf("%d",&a);
    struct student *students = (struct student*)malloc(a*sizeof(struct student));
    for(int i = 0;i<a;i++) {
        scanf("%d %s %f",&students[i].rollno,students[i].name,&students[i].marks);
    }
    for(int i =0;i<a;i++) {
        float bonus;
        int b = students[i].marks;
        if(b<50000) {
            bonus= (0.1)*b;
        } else  {
            bonus = (0.05)*b;
        }
        printf("Employee ID: %d, Name: %s, Bonus: %.2f \n",students[i].rollno,students[i].name,bonus);
    }

}