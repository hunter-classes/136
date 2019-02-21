
main: main.o funcs.o
	g++ -o main main.o funcs.o

main.o: main.cpp funcs.h
	g++ -c main.cpp

funcs.o: funcs.cpp funcs.h
	g++ -c funcs.cpp

cleean:
	rm -f funcs.o main.o
