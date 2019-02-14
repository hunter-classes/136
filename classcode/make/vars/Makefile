#
# main <--- main.o <-- main.cpp
#       \__ funcs.o <-- funcs.cpp
OBJECTS=main.o funcs.o
CXXFLAGS=
LDFLAGS=-lm
main: $(OBJECTS)
	g++ $(LDFLAGS) $(CXXFLAGS) -o main $(OBJECTS)

main.o: main.cpp funcs.h
	g++ $(CXXFLAGS) -c main.cpp

funcs.o: funcs.cpp funcs.h
	g++ $(CXXFLAGS) -c funcs.cpp

clean:
	rm $(OBJECTS)
