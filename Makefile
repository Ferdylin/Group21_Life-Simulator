majoryear.o: majoryear.h minoryear.h Show.h Stats_control.h majoryear.cpp
	g++ -c -pedantic-errors -std=c++11 majoryear.cpp

minoryear.o: majoryear.h minoryear.h Show.h Stats_control.h minoryear.cpp
	g++ -c -pedantic-errors -std=c++11 minoryear.cpp

Stats_control.o: majoryear.h minoryear.h Show.h Stats_control.h Stats_control.cpp
	g++ -c -pedantic-errors -std=c++11 Stats_control.cpp

main: main.cpp majoryear.o minoryear.o Show.h Stats_control.o
	g++ -pedantic-errors -std=c++11 main.cpp majoryear.o minoryear.o Stats_control.o -o main

play: main
	./main

clean:
	rm -rf *.o main

.PHONY: clean
