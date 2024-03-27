NAME = megaphone #exec name

CC = c++ #compiler

CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic #pedantic MAC isue

SRCS = megaphone.cpp #only the .cpp files

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