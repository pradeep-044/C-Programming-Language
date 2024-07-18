#include<stdio.h>

void main(){
    int marks;
    printf("Enter marks: \n");
    scanf("%d",&marks);

    if(marks<40 && marks>=0){
        printf("Failed");

    }
    else if(marks>=40 && marks<60){
        printf("Pass");
    }
    else if(marks>=60 && marks<80){
                printf("First class");
    }
    else if(marks>=80 && marks<=100){
                 printf("Distinction");
    }
    else {
        printf("Invalid marks");
    }
}//main
