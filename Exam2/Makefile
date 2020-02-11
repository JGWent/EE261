.PHONY: all clean

all: use1.out


use1.out: coords.o use1.cpp
	g++ -o use1.out coords.o use1.cpp

coords.o: coords.h coords.cpp
	g++ -c coords.cpp

clean:
	rm -f *.o *.out *~ *.gch 
