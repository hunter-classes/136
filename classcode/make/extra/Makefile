CXXFLAGS=
LDFLAGS=
OBJECTS=main.o funcs.o
main: $(OBJECTS)
	g++ $(LDFLAGS) $(CXXFLAGS) -o main $(OBJECTS)

funcs.o: funcs.cpp funcs.h

main.o: main.cpp funcs.h morefuncs.h

clean:
	rm -f $(OBJECTS)
