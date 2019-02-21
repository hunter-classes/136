
main: main.o funcs.o
	g++ -o main main.o funcs.o

main.o: main.cpp funcs.h
	g++ -c main.cpp

funcs.o: funcs.cpp funcs.h
	g++ -c funcs.cpp

test: test.o funcs.o
	g++ -o test test.o funcs.o

test.o: test.cpp
	g++ -c test.cpp

clean:
	rm -f funcs.o main.o test.o
