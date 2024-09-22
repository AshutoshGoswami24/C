/*
 * File: student_marks_checker.c
 * 
 * Description:
 * This program interacts with the user to collect their name, roll number,
 * and marks for three subjects (M1, M2, M3). It first greets the user 
 * using their name, then asks for their roll number and the marks for 
 * each subject. The program evaluates whether the user has passed 
 * (marks >= 40) or failed in each subject and provides appropriate feedback. 
 * This demonstrates user input handling, conditional statements, and basic 
 * output in C.
 * 
 * Author: Ashutosh Goswami
 * GitHub: https://github.com/AshutoshGoswami24/
 */

#include <stdio.h>

int main()
{
    int R, M1, M2, M3;
    char NM[40];
    
    
    printf("Naam Bol Bhi \n");
    fgets(NM, sizeof(NM), stdin);  
    
    printf("Hello 👋 %s", NM);
    printf("\nAab Roll Number Bol %s Bhi\n", NM);
    scanf("%d", &R);
    
    printf("Oo Bhi Mast Roll Number %d\n", R);
    printf("\nOk Bhi Aab M1, M2, M3 Ke Marks De: \n");
    scanf("%d %d %d", &M1, &M2, &M3);
    
    if (M1 >= 40)    
        printf("M1 Me Pass Hai bhi\n");
    else
        puts("M1 Me Fail");

    if (M2 >= 40)
        printf("M2 Me Bhi Pass Hai\n");
    else
        puts("M2 Me Bhe Fail");

    if (M3 >= 40)
        printf("M3 Me Bhi Pass Hai\n");
    else
        puts("M3 Me Bhi Fail");

    return 0;
}

