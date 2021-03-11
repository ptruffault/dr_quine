NAME	:=	Grace
SRC		:= $(NAME).c
OBJ		:=	$(NAME).o

$(NAME): 
	@gcc -Wall -Wextra -Werror -O $(SRC) -o $(NAME)

all: $(NAME)

clean:
	@rm -rf $(NAME) $(NAME)_kid.c

re: clean all

test: re
	./$(NAME)
	diff $(SRC) $(NAME)_kid.c


.PHONY: all clean re test