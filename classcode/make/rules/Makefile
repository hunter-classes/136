#
# main <--- main.o <-- main.cpp
#       \__ funcs.o <-- funcs.cpp
OBJECTS=main.o funcs.o
CXXFLAGS=-std=c++14
LDFLAGS=-lm
CXX=g++
main: $(OBJECTS)
	g++ $(LDFLAGS) $(CXXFLAGS) -o main $(OBJECTS)

main.o: main.cpp funcs.h

funcs.o: funcs.cpp funcs.h

clean:
	rm $(OBJECTS)
