#include "skiplist.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>



struct skiplist_node *skiplistfunction(int instructions)
{           
       switch (instructions)
       {
               case (initialization):
                    puts("initialization");
                    return(skiplist_initialization());
                    break;
               case (insertion):
                    puts("insertion");
                    //skiplist_insertion(header, searchKey, newValue);
                    break;
               default:
                    puts("end");
            	    break;
       }
}





struct skiplist_node *skiplist_initialization()
{
       struct skiplist_node *head,*end;
       int i;
       end=(struct skiplist_node *) malloc(sizeof(struct skiplist_node));
       for (i=0;i<MaxLevel;i++)
       {
           end->forward[i]=NULL;
           printf("%d\n",(int)(end->forward[i]));
       }
       end->key=MaxValue;
       printf("%d\n", end->key);
           head=(struct skiplist_node *) malloc(sizeof(struct skiplist_node));
       for (i=0;i<MaxLevel;i++)
       {
           head->forward[i]=end;
           printf("%d\n",(int)(head->forward[i]));
       }
       
       return (head);
}

void skiplist_insertion(struct skiplist_node *header, int searchKey, int newValue)
{
     	struct skiplist_node *update[MaxLevel],*x;
	int lvl,i;

	x=header;
	for(i=MaxLevel-1;i>=0;i--)
	{
		while(x->forward[i]->key < searchKey)
		{
			x=x->forward[i];
		}
	   	update[i]=x;
	}
	x=x->forward[0];
	if(x->key==searchKey)
		x->value=newValue;
	else
	{
		lvl=randomLevel();
		//x=makeNode(lvl,searchKey,x->value);
		for(i=0;i<=lvl;i++)
		{
			x->forward[i]=update[i]->forward[i];
			update[i]->forward[i]=x;
		}
	} 
}






int randomLevel()
{
        srand(time(NULL));                              //Seed using the current time
        return rand()%(MaxLevel - 1);                   //Generates a random number in the space 0 to MaxLevel-1
}

