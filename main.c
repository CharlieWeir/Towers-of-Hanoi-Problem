#include <stdio.h>
#include <stdlib.h>

void tower(int n, char start, char end, char temp)
{


    //Base case
    if(n == 1)
        {
            // Move from start to end
            printf("Move %d from %c to %c\n", n, start, end);

        }
    else
        {
    // Recursive case
            //need to move n-1 disks to the temp location first
            tower(n-1,start,temp,end);
            printf("Move %d from %c to %c\n", n, start, end);
            tower(n-1,temp,end,start);


        }








}

int main()
{
    printf("Towers Of Hanoi problem\n");
    printf("This program outputs the steps needed to solve the problem for n disks:\n\n");

    //start with n = 2 function to move from current position to desired destination.

    //Try out the solutions online: https://www.mathsisfun.com/games/towerofhanoi.html

    char A = 'A';
    char B = 'B';
    char C = 'C';
    int disks = 4;

    tower(disks,A,C,B);





    return 0;
}

