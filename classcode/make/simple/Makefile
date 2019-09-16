# target: dependencies
#	rule (command)
main: main.cpp
	g++ -o main main.cpp



help:
	@echo "this is some help"
	@echo "with two lines printing"
	@echo "and now I'll list a directory"
	@ls -l


chained: one three
	@echo "I'm running chained"

one: two
	@echo "I'm running one"

two:
	@echo "I'm running two"

three:
	@echo "I'm running three"
