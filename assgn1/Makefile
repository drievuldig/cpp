main: main.cpp url.o url.h
	g++ -o main main.cpp url.o -g -Wall -pedantic

url.o: url.cpp url.h
	g++ -o url.o -c url.cpp -g -Wall -pedantic

clean:
	rm -f *.o