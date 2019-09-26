
main: main.o fact.o
	g++ -o main main.o fact.o

tests: tests.o fact.o
	g++ -o tests tests.o fact.o

tests.o: tests.cpp

main.o: main.cpp fact.h

fact.o: fact.cpp fact.h

clean:
	rm main.o test.o fact.o
