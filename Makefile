majoryear.o: majoryear.h minoryear.h show.h Stats_control.h major year.cpp
	g++ -c -pedantic-errors -std=c++11 majoryear.cpp

minoryear.o: majoryear.h minoryear.h show.h Stats_control.h minor year.cpp
	g++ -c -pedantic-errors -std=c++11 minoryears.cpp

Stats_control.o: major year.h minor year.h show.h Stats_control.h Stats_control.cpp
	g++ -c -pedantic-errors -std=c++11 Stats_control.cpp

main: main.cpp major year.h minor year.h show.h Stats_control.h
	g++ -pedantic-errors -std=c++11 main.cpp .o majoryear.o minoryear.o Stats_control.o -o main

play: main
	./main

clean:
	rm -rf *.o main

.PHONY: clean
