#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cont;
    do{
        int numDoors;
        int numAttemps;
        int wins = 0;
        char switchDoor;

        srand(time(NULL));

        printf("Number of doors: ");
        scanf("%d", &numDoors);
        do{
            printf("Switch Doors?(y/n): ");
            scanf(" %c", &switchDoor);
        }while(switchDoor != 'y' && switchDoor != 'n');
        printf("Number of attemps: ");
        scanf("%d", &numAttemps);

        int i;
        for(i=0;i<numAttemps;i++){

            int winningDoor = rand() % numDoors + 1;
            int chosenDoor = rand() % numDoors + 1;
            int remainingDoor;

            if (chosenDoor != winningDoor){
                remainingDoor = winningDoor;
            }else{
                do{
                    remainingDoor = rand() % numDoors + 1;
                }while(remainingDoor == chosenDoor);
            }


            if (switchDoor == 'y'){
                chosenDoor = remainingDoor;
            }

            if(chosenDoor == winningDoor) {
                wins++;
            }
        }
        printf("%d wins\n", wins);
        printf("%.2f%%\n", 100.0 * wins / numAttemps);

        printf("\nRun again?(y/n) ");
        scanf(" %c", &cont);

    }while (cont == 'y');

    return 0;
}
