hotdogstand: main.o hotdogstand.o
	g++ main.o hotdogstand.o -o hotdogstand

main.o: main.cpp
	g++ -c main.cpp

hotdogstand.o: hotdogstand.cpp
	g++ -c hotdogstand.cpp

clean:
	rm *.o hotdogstand
