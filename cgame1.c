#include<stdio.h>
#include<stdlib.h> // these library is used to generate the random number **rand(), srand()**//
#include<time.h>
int main(){
    int number, guess, nguesses=1;
    srand(time(0)); //time will help us to give random number in every sec
    number=rand()%100 + 1;//Generate Random number between 1-100//
    // printf("The number is %d\n",number);
     
    //Keep running the loop until the number is guessed
    do
    { 
        printf("Guess the number between 1 to 100 :");
        scanf("%d", &guess);
        if (guess>number)
        {
            printf("***Lower number please****\n");
        }
        else if (guess<number)
        {
            printf("****Higher number please****\n");
        }
        else
        {
            printf("You guessed in %d attempts\n", nguesses);
        }
        
        
        nguesses++;
    } while (guess!=number);
    

    return 0;
}
