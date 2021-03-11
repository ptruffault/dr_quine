NAME	:=	Colleen
SRC		:= $(NAME).c
OBJ		:=	$(NAME).o

$(NAME): 
	@gcc -O $(SRC) -o $(NAME)

all: $(NAME)

clean:
	@rm -rf $(NAME)

re: clean all

test: re
	./$(NAME) > tmp_$(NAME).c 
	diff $(SRC) tmp_$(NAME).c


.PHONY: all clean re test