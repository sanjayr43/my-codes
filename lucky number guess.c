#include <stdio.h>

int main() {
    printf("Guess the lucky number between 1 and 100 within 3 attempts\n");
    printf("Enter a number between 1 and 100 : ");
    int n;
    int i = 1;
    while(1)
    {
        scanf("%d", &n);
            if(n <= 100)
            {
                if(n == 69)
                {
                    printf("You found the lucky number, attempt number: %d", i);
                    break;
                }
                else
                {
                    printf("Wrong number. try again : ");
                }
            }
            else
            {
                printf("Entered number is out of range");
                break;
            }

        }
    }
}
