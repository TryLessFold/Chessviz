FLAGS=-c

.PHONY: clean

all: create MainProg

run: all
	./bin/MainProg

MainProg: build/src/main.o build/src/ChessOut.o build/src/ChessCheck.o
	g++ -o bin/MainProg build/src/*.o

test: build/test/main.o build/test/chess_test.o
	g++ -o bin/Chess_test build/test/*.o

build/src/main.o: src/main.c
	g++ $(FLAGS) src/main.c -o build/src/main.o

build/src/ChessOut.o: src/ChessOut.c
	g++ $(FLAGS) src/ChessOut.c -o build/src/ChessOut.o

build/src/ChessCheck.o: src/ChessCheck.c
	g++ $(FLAGS) src/ChessCheck.c -o build/src/ChessCheck.o

build/test/main.o: test/main.c
	g++ -I thirdparty src $(FLAGS) test/main.c -o build/test/main.o

build/test/chess_test.o: test/chess_test.c
	g++ -I thirdparty src $(FLAGS) test/chess_test.c -o build/test/chess_test.o

create:
	mkdir -p build/ bin/ build/src build/test

clean:
	rm -rf build/ bin/ build/src build/test
