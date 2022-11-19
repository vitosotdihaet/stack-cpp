FLAGS = -g -Wall -Wextra

a:
	g++ $(FLAGS) -o main.out stack.hpp main.cpp 
	./main.out