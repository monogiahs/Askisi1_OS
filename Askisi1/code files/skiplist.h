#ifndef SKIPLIST_H_
#define SKIPLIST_H_

#define MaxLevel 8

#define MaxValue 20000



struct node *skiplistfunction(int);
struct node *skip_initialization();
int randomLevel();


struct node
{
       int key;
       struct node* forward[MaxLevel];
};

enum instructions{
     initialization=0,
     insertion
     
     };

#endif /*SKIPLIST_H_*/
