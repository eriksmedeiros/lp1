PROG = SUM
CC = g++
CPPFLAGS = -O0 -g -Wall -pedantic -I\include
OBJS = main.o io.o 

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o : 
	$(CC) $(CPPFLAGS) -c main.cpp
io.o :
	$(CC) $(CPPFLAGS) -c io.cpp
clean :
	rm -f makefile *.o $(OBJS)