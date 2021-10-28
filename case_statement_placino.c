#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value1, value2, answer;
    char operatorToBeUsed, choice = 'y';

    printf("Would you like to use the calculator as many times as you want(y/n): ");
    scanf("%c", &choice);

    while (choice == 'y')
    {
    printf("Type in your Expression without spaces: \n");
    scanf("%d%c%d", &value1, &operatorToBeUsed, &value2);

    switch(operatorToBeUsed){
    case'+':
        answer = value1 + value2;
        printf("%d + %d = %d\n", value1, value2, answer);
        break;
    case '-':
        answer = value1 - value2;
        printf("%d - %d = %d\n", value1, value2, answer);
        break;
    case '*':
        answer = value1 * value2;
        printf("%d * %d = %d\n", value1, value2, answer);
        break;
    case '/':
        if(value2 == 0){
            printf("Division by Zero\n");
        } else {
            answer = value1 / value2;
            printf("%d / %d = %d\n", value1, value2, answer);
        }
        break;
    default:
        printf("Unknown Operator\n");
        break;
    }
    }
    return 0;
}
