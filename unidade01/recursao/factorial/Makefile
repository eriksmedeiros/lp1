PROG = maiorPrimo
CC = g++
CPPFLAGS = -Wall -ansi -pedantic -g
OBJS = main.o primo.o fatorial.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o : 
	$(CC) $(CPPFLAGS) -c main.cpp

primo.o : 
	$(CC) $(CPPFLAGS) -c primo.cpp

fatorial.o : 
	$(CC) $(CPPFLAGS) -c fatorial.cpp

clean : 
	rm -f *.o