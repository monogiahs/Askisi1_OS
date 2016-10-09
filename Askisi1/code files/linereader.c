#include<stdio.h>



main()
{
	char ch;
	FILE *fp;
	int ar=0;
	char grammi[80];
	fp=fopen("30+.in.txt", "r");
	while(!feof(fp))
	{
		ch=fgetc(fp);
		if(ch==' ')
			printf(" ");
		else
			printf("%c",ch);
	}
	fclose(fp);
}
