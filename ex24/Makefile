NAME = libft.a
SRC = ./srcs
INC = ./includes
OBJ =  .
LIST_SRC = $(SRC)/ft_putchar.c $(SRC)/ft_putstr.c $(SRC)/ft_strcmp.c \
		   $(SRC)/ft_strlen.c $(SRC)/ft_swap.c
LIST_OBJ = $(LIST_SRC:$(SRC)/%.c=$(OBJS)%.o)
CFLAG = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(LIST_SRC)
		gcc $(CFLAG) -c -I $(INC) $(LIST_SRC) 
		ar rc $(NAME) $(LIST_OBJ)

clean :
		/bin/rm -f  $(LIST_OBJ)

fclean : clean
		/bin/rm -f $(NAME)

re : fclean all
