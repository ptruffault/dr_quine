NAME	:=	Colleen
SRC		:= $(NAME).s
OBJ		:=	$(NAME).o

$(OBJ):
	@nasm -f elf64 $(SRC)

$(NAME): $(OBJ)
	@ld -s $(OBJ) -o $(NAME)

all: $(NAME)

fclean: clean
	@rm -rf $(OBJ)

clean:
	@rm -rf $(NAME)

re: fclean all

exe: re
	./$(NAME)

val: re
	valgrind -s ./$(NAME)

.PHONY: all fclean clean exe re