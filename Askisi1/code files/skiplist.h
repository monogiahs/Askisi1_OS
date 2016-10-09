#ifndef SKIPLIST_H_
#define SKIPLIST_H_

#define MaxLevel 8

#define MaxValue 20000



struct skiplist_node *skiplistfunction(int);
struct skiplist_node *skiplist_initialization();
void skiplist_insertion(struct skiplist_node* , int, int);
int randomLevel();


struct skiplist_node					//Basiki domi tis skiplist
{
       	int key;
	int value;     
      	struct skiplist_node* forward[MaxLevel];
};

enum instructions{
     initialization=0,
     insertion
     
     };

#endif /*SKIPLIST_H_*/
