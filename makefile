FLAGS = -g -Wall -Wextra

a:
	g++ $(FLAGS) -o main main.cpp stack.cpp
	./main