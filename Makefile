FLAGS=-c

.PHONY: clean

all: create MainProg

run: all
	./bin/MainProg

MainProg: build/main.o build/ChessOut.o
	g++ -o bin/MainProg build/*.o

build/main.o: src/main.c
	g++ $(FLAGS) src/main.c -o build/main.o

build/ChessOut.o: src/ChessOut.c
	g++ $(FLAGS) src/ChessOut.c -o build/ChessOut.o

create:
	mkdir -p build/ bin/

clean:
	rm -rf build/ bin/
