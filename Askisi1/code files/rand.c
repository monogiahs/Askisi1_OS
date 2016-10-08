#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define  MaxLevel 10

int randomLevel();

int main(void)
{
	printf("%d\n",randomLevel());
}

int randomLevel()
{
	srand(time(NULL)); 		               	//Seed using the current time 	
        return rand()%(MaxLevel - 1);			//Generates a random number in the space 0 to MaxLevel-1
}
