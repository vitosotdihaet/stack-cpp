FLAGS = -g -Wall -Wextra

a:
	g++ $(FLAGS) -o main stack.hpp main.cpp 
	./main