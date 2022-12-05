main: main.cpp cell.o grid.o cell.h grid.h life.h
	g++ -o main main.cpp cell.o grid.o

grid.o: grid.cpp grid.h cell.o cell.h
	g++ -o grid.o cell.o -c grid.cpp 

cell.o: cell.cpp cell.h life.h
	g++ -o cell.o -c cell.cpp

clean:
	rm *.o