#include <stdio.h>

int main (){
    
    //Declaration of variables
    char student_name[25], grade, choice;
    int admission;
    float subject1, subject2, subject3, average;

    printf("\n\t\t...WELCOME...\t\t\n");

    while(1){
        
        //Inputs section
        printf("=>Enter the students surname :");
        scanf("%s", &student_name);

        printf("\n=>Enter student's admission number :");
        scanf("%d", &admission);

        printf("\n=>Enter the students marks in the following subjects.");
        printf("\n1.Mathematics :");
        scanf("%f", &subject1);

        printf("2.English :");
        scanf("%f", &subject2);

        printf("3.Swahili :");
        scanf("%f", &subject3);

        average = (subject1 + subject2 + subject3)/3.0; //finding average

        if(average <= 39){
            grade = 'F';
        }
        else if(average >= 40 && average <= 49){
            grade = 'D';
        }
        else if(average > 49 && average <= 59){
            grade = 'C';
        }
        else if(average > 59 && average <= 69){
            grade = 'B';
        }
        else{
            grade = 'A';
        }

        printf("\nStudent's name :\t%s", student_name);
        printf("\nStudent's admission:\t%d", admission);
        printf("\nAverage marks :\t\t%.2f", average);
        printf("\nFinal grade :\t\t%c", grade);

        printf("\n\nWould you like to continue?, Yes(Y) or No(N) :");
        scanf(" %c", &choice);

        if(choice == 'Y' || choice == 'y'){
            continue;
        }
        else if(choice == 'N' || choice == 'n'){
            break;
        }
        else{
            printf("\nInvalid input");
            break;
        }
    } 

    return 0; 
}
