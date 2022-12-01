majorYear.o: 
	g++ -c -pedantic-errors -std=c++11 majorYear.cpp

minorYears.o: 
	g++ -c -pedantic-errors -std=c++11 minorYears.cpp

manipulateStats.o: majorYears13_18.h majorYears21_23.h struct.h manipulateStats.h minorYears.h manipulateStats.cpp 
	g++ -c -pedantic-errors -std=c++11 manipulateStats.cpp

main: main.cpp majorYears13_18.o majorYears21_23.o minorYears.o manipulateStats.o struct.h
	g++ -pedantic-errors -std=c++11 main.cpp majorYears13_18.o majorYears21_23.o minorYears.o manipulateStats.o -o main

play: main
	./main

clean:
	rm -rf *.o main

.PHONY: clean
