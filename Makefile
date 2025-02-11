SRC = Kito.cc String.cc
FLAGS = -Wall -Wextra -Wpedantic -std=c++98

all:
	$(CXX) $(SRC) $(FLAGS) -o kito