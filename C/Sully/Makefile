NAME	:=	Sully
SRC		:= $(NAME).c
OBJ		:=	$(NAME).o

$(NAME): 
	@gcc -Wall -Wextra -Werror -O $(SRC) -o $(NAME)

all: $(NAME)

clean:
	@rm -rf $(NAME) $(NAME)_*

re: clean all


.PHONY: all clean re test