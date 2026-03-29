#include<stdio.h>
#include<string.h>

int main() {
    printf("HEART WARNING GREETS\n");
    printf("please enter your details\n");
    
    int age;
    char name[50];
    
    printf("enter patients name : ");
    scanf("%s", name);
    
    printf("enter patients age : ");
    scanf("%d", &age);
    
    char patients_disease[50];
    printf("enter patients disease : ");
    scanf("%s", patients_disease);
    
    if(strcmp(patients_disease, "fever") == 0) {
        printf("fever tablet cost = 500\n");
    } else if(strcmp(patients_disease, "dolo") == 0) {
        printf("dolo tablet cost = 550\n");
    } else {
        printf("vicks tablet cost = 50\n");
    }
    
    return 0;
}