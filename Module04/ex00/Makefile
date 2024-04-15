NAME = exec00 #exec name

CC = c++ #compiler

CFLAGS = -Wall -Wextra -Werror # -pedantic -std=c++98 #pedantic MAC isue

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp #only the .cpp files

OBJS = $(SRCS:.cpp=.o)
OBJS := $(addprefix obj/, $(OBJS))  #prefix to create obj directory

all: $(NAME)

obj/%.o:%.cpp
	mkdir -p obj
	$(CC) -c $(CFLAGS) $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -fr obj
fclean: clean
	rm -fr $(NAME)
re: fclean all