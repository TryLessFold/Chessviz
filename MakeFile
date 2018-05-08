all: MainProg

MainProg: main.o ChessOut.o
	gcc -o MainProg *.o

main.o: main.c
	gcc -c main.c

ChessOut.o: ChessOut.c
	gcc -c ChessOut.c

clean:
	rm -rf *.o MainProg
