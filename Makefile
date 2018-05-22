FLAGS=-c

.PHONY: clean

all: create MainProg

run: all
	./bin/MainProg

MainProg: build/src/main.o build/src/ChessOut.o
	g++ -o bin/MainProg build/src/*.o

test: build/test/main.o build/test/chess_test.o
	g++ -o bin/Chess_test build/test/*.o

build/src/main.o: src/main.c
	g++ $(FLAGS) src/main.c -o build/src/main.o

build/src/ChessOut.o: src/ChessOut.c
	g++ $(FLAGS) src/ChessOut.c -o build/src/ChessOut.o

build/test/main.o: test/main.c
	g++ $(FLAGS) test main.c -o build/test/src/main.o

build/test/chess_test.o: test/chess_test.c
	g++ $(FLAGS) test chess_test.c -o build/test/src/chess_test.o

create:
	mkdir -p build/ bin/ build/src build/test

clean:
	rm -rf build/ bin/ build/src build/test
