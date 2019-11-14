
main: sample1.o
	g++ -o sample1 sample1.o

sample1.o: sample1.cpp

debug: CXXFLAGS := $(CXXFLAGS) -g
debug:main

clean:
	rm -f sample1.o

