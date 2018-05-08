FLAGS=-std=c99 -c

all: MainProg

MainProg: main.o ChessOut.o
	gcc -o MainProg *.o

main.o: main.c
	gcc $(FLAGS) main.c

ChessOut.o: ChessOut.c
	gcc $(FLAGS) ChessOut.c

clean:
	rm -rf *.o MainProg
