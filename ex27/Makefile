NAME = ft_display_file
SRC = .
INC = .
OBJ = .
# LIST_SRC = $(SRC)/ft_print_numbers.c $(SRC)/ft_putchar.c $(SRC)/main.c
LIST_SRC = $(SRC)/ft_display_file.c
LIST_OBJ = $(LIST_SRC:$(SRC)/%.c=$(OBJS)%.o)
	CFLAG = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(LIST_SRC)
		gcc $(CFLAG) -I $(INC) $(LIST_SRC)  -o $(NAME)

clean :
		/bin/rm -f  $(LIST_OBJ)

fclean : clean
		/bin/rm -f $(NAME)
