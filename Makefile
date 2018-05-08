FLAGS=-std=c99 -c

.PHONY: clean

all: create MainProg

run: all
	./bin/MainProg

MainProg: build/main.o build/ChessOut.o
	gcc -o bin/MainProg build/*.o

build/main.o: src/main.c
	gcc $(FLAGS) src/main.c -o build/main.o

build/ChessOut.o: src/ChessOut.c
	gcc $(FLAGS) src/ChessOut.c -o build/ChessOut.o

create:
	mkdir -p build/ bin/

clean:
	rm -rf build/ bin/
