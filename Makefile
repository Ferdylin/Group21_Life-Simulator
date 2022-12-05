fixedevents.o: fixedevents.h randomevents.h Show.h Stats_control.h fixedevents.cpp
	g++ -c -pedantic-errors -std=c++11 fixedevents.cpp

randomevents.o: fixedevents.h randomevents.h Show.h Stats_control.h randomevents.cpp
	g++ -c -pedantic-errors -std=c++11 randomevents.cpp

Stats_control.o: fixedevents.h randomevents.h Show.h Stats_control.h Stats_control.cpp
	g++ -c -pedantic-errors -std=c++11 Stats_control.cpp

main: main.cpp fixedevents.o randomevents.o Show.h Stats_control.o
	g++ -pedantic-errors -std=c++11 main.cpp fixedevents.o randomevents.o Stats_control.o -o main

play: main
	./main

clean:
	rm -rf *.o main tempfile.txt

.PHONY: clean
