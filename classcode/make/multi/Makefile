OBJECTS=main.o addfuncs.o morefuncs.o

main: main.o addfuncs.o morefuncs.o
	g++  -o main  $(OBJECTS)

main.o: main.cpp addfuncs.h morefuncs.h
	g++ -c main.cpp

addfuncs.o: addfuncs.cpp addfuncs.h
	g++ -c addfuncs.cpp

morefuncs.o: morefuncs.cpp addfuncs.h morefuncs.h
	g++ -c morefuncs.cpp

clean:
	rm $(OBJECTS)

help:
	@cat Readme.org

install:
	@echo do what is needed to install this application
