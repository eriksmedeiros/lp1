all: dec2bin.o main.o
	g++ -Wall -pedantic -std=c++17 -o main dec2bin.o main.o

main.o: main.cpp dec2bin.h
	g++ -Wall -pedantic -std=c++17 -c main.cpp

dec2bin.o: dec2bin.cpp dec2bin.h
	g++ -Wall -pedantic -std=c++17 -c dec2bin.cpp

clean:
	rm -f main *.o