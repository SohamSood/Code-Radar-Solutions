// Your code here...
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
    for(int i = 0;i<a;i++) {
        for(int j = 0;j<a;j++) {
            if(students[i].marks > students[j].marks) {
                int swapp = students[i].rollno;
                float swappp = students[i].marks;
                students[i].rollno = students[j].rollno;
                students[i].marks = students[j].marks;
                students[j].rollno = swapp;
                students[j].marks = swappp;
                //notmine
                char swappn[100];
                strcpy(swappn, students[i].name);
                strcpy(students[i].name, students[j].name);
                strcpy(students[j].name, swappn);
                //till here
            }
        }
    }
    for(int i = 0;i<a;i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f \n",students[i].rollno,students[i].name,students[i].marks);
    }   
}