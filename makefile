main: main.o
	g++ -o main main.o

main.o: main.cpp Node.h List.h List.cpp
	g++ -c main.cpp

# List.o: List.h List.cpp
# 	g++ -c List.cpp

clean:
	rm *o main