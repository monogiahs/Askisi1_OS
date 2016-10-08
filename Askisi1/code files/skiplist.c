#include "skiplist.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>



struct node* skiplistfunction(int instructions)
{           
       switch (instructions)
       {
               case (initialization):
                    puts("initialization");
                    skip_initialization();
                    break;
               case (insertion):
                    puts("insertion");
                    //skip_insertion();
                    break;
               default:
                    puts("end");
            	    break;
       }      
}





struct node *skip_initialization()
{
       struct node *head,*end;
       int i;
       end=(struct node *) malloc(sizeof(struct node));
       for (i=0;i<MaxLevel;i++)
       {
           end->forward[i]=NULL; 
           printf("%d\n",(int)(end->forward[i]));
       }
           head=(struct node *) malloc(sizeof(struct node));
       for (i=0;i<MaxLevel;i++)
       {
           head->forward[i]=end; 
           printf("%d\n",(int)(head->forward[i]));
       }
       
       return (head);
}


int randomLevel()
{
        srand(time(NULL));                              //Seed using the current time
        return rand()%(MaxLevel - 1);                   //Generates a random number in the space 0 to MaxLevel-1
}

