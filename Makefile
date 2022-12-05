main: main.cpp cell.o grid.o cell.h grid.h life.h
	g++ -o main main.cpp cell.o grid.o -Wall -pedantic -g

grid.o: grid.cpp grid.h cell.o cell.h
	g++ -o grid.o cell.o -c grid.cpp -Wall -pedantic -g

cell.o: cell.cpp cell.h life.h
	g++ -o cell.o -c cell.cpp -Wall -pedantic -g

clean:
	rm *.o