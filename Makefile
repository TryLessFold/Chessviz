FLAGS=-c -w

.PHONY: clean

all: create MainProg

run: all
	./bin/MainProg

test_run: test
	./bin/Chess_test

MainProg: build/src/main.o build/src/ChessOut.o build/src/ChessCheck.o
	gcc -o bin/MainProg build/src/*.o

test: build/test/main.o build/test/chess_test.o
	gcc -o bin/Chess_test build/test/*.o build/src/ChessCheck.o

build/src/main.o: src/main.c
	gcc $(FLAGS) src/main.c -o build/src/main.o

build/src/ChessOut.o: src/ChessOut.c
	gcc $(FLAGS) src/ChessOut.c -o build/src/ChessOut.o

build/src/ChessCheck.o: src/ChessCheck.c
	gcc $(FLAGS) src/ChessCheck.c -o build/src/ChessCheck.o

build/test/main.o: test/main.c
	gcc -I thirdparty -I src $(FLAGS) test/main.c -o build/test/main.o

build/test/chess_test.o: test/chess_test.c
	gcc -I thirdparty -I src $(FLAGS) test/chess_test.c -o build/test/chess_test.o

create:
	mkdir -p build/ bin/ build/src build/test

clean:
	rm -rf build/ bin/ build/src build/test
