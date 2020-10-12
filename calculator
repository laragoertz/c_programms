/* creat a calculator by using printf, scanf and a switch case*/
#include <stdio.h>

int main(){
    //define variables
    int firstnumber = 0.0;
    char operator = 0;
    int secondnumber = 0.0;
    int result = 0.0; 
    //insert
    printf("\nInsert the first number:       ");
    fflush(stdin);
    scanf("%i", &firstnumber);
    printf("\nChoose an operator:            ");
    fflush(stdin);
    scanf("%c", &operator); 
    printf("\nInsert the second number:      ");
    fflush(stdin);
    scanf("%i", &secondnumber);
    //let the operations begin 
            switch (operator)
            {
            case '+':
            result = firstnumber + secondnumber;
                break;
            case '-':
            result = firstnumber - secondnumber;
                break;
            case '*':
            result = firstnumber * secondnumber;
                break;
            case '/':
            result = firstnumber / secondnumber;
                break;
            default:
                break;
            }
    printf("\n________________________________________\n");
    printf("\nthe result is %i %c %i          %i",firstnumber, operator, secondnumber, result);
    printf("\nCiao!\n");

}
