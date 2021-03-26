NAME	:=	Sully
SRC		:= $(NAME).c
OBJ		:=	$(NAME).o

$(NAME): 
	@/usr/bin/gcc -O $(SRC) -o $(NAME)

all: $(NAME)

clean:
	@rm -rf $(NAME) $(NAME)_*

re: clean all

test: re 
	./$(NAME)

.PHONY: all clean re test