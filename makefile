FLAGS = -g -Wall -Wextra
SRC = main.cpp stack.hpp

a:
	g++ $(FLAGS) -o main.out $(SRC)
	./main.out