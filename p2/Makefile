all: main

main: main.o
	g++ -o main main.o -lncurses
main.o: main.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c main.cpp
run:
	./main
clean:
	-rm -f main
	-rm -f main.o
