main: main.o circle.o rectangle.o square.o triangle.o shape.o
	g++ -o main -std=c++11 main.o circle.o rectangle.o square.o triangle.o shape.o 
main.o: main.cpp
	g++ -c -std=c++11 main.cpp
circle.o: circle.cpp
	g++ -c -std=c++11 circle.cpp
rectangle.o: rectangle.cpp
	g++ -c -std=c++11 rectangle.cpp
square.o: square.cpp
	g++ -c -std=c++11 square.cpp 
triangle.o: triangle.cpp 
	g++ -c -std=c++11 triangle.cpp 
shape.o: shape.cpp 
	g++ -c -std=c++11 shape.cpp 

clean:
	-rm *.o
	-rm *.h.gch

