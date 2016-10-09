

stucs: main.o skiplist.o commands.o
	gcc main.o skiplist.o commands.o -o stucs


main.o: 	main.c
	gcc -c main.c

skiplist.o: 	skiplist.c
	gcc -c skiplist.c

commands.o: 	commands.c
	gcc -c commands.c

clean:
	rm stucs main.o skiplist.o commands.o
