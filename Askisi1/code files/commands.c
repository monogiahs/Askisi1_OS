#include "commands.h"




int find_command(char *protasi)
{
    if (protasi[1]==101)			
       return (protasi[0]+protasi[1]+1);		//epistrefei to athroisma twn ASCII kodikwn pou diabase
       return (protasi[0]+protasi[1]);			//Stin periptwsi pe(percentile) kai ta(average) proekupte o idios ASCII
}							//kai gia auto elegxoume to ASCII tou deuterou xaraktira 

void clear(char *array)
{
	int i;
	for (i=0;i<=49;i++)
		array[i]='\0';
}


void textreader(FILE *fp)
{
     char ch;
     
     printf("hello here\n");
     ch=fgetc(fp);
     
     while (ch!=EOF)
     {
           printf("%c",ch);
           ch=fgetc(fp);   
     } 
}


//char * getline()



