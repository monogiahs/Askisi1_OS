#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "commands.h"
#include "skiplist.h"

int main(int argc, char *argv[])
{
     char ch,c;
     char command [50];
     int real_command;
     FILE *fp;
     int ar,cnt;
     struct node *header ;
  
     header=skiplistfunction(initialization);
     clear(command);      
     printf("%d\n",randomLevel());
     fp=fopen ("../txt files/30+.in.TXT","r"); /*anoigma arxeiou */
       
	 
	 while (1)
	 {
        cnt=0;
        command[cnt]=fgetc(fp);
        if( feof(fp) ){ break ;}
        while (command[cnt]!='\n')
        {
        	command[++cnt]=fgetc(fp);
        }
		printf("%s",command);
 
       							//fgets(command, sizeof (command), stdin);
       switch (find_command(command))
       {
            case (i):
                puts("insert");
                break;
            case (q):
                puts("query");
                break;
            case (m):
                puts("modify");
                break;
            case (d):
                puts("delete");
                break;
            case (a):
                puts("average");
                break;
            case (ra):
                puts("raverage");
                break;
            case (ta):
                puts("taverage");
                break;
            case (b):
                puts("bottom");
                break;
            case (ct):
                puts("cources-to-take");
                break;
            case (f):
                puts("find");
                break;
            case (p):
                puts("percentile");
                break;
            case (pe):
                puts("percentiles");
                break;
            case (e):
                puts("exit");
                break;
            default:
            	puts("end");
            	break;
       }
       clear(command);
    }
    fclose(fp);/* kleisimo arxeiou*/
    printf("end");
    return 0;
}

