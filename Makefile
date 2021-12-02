NAME = chillgame
SRC = SRCS/main.c \

CC = gcc #clang
CFLAGS = -lncurses 
RM = rm -rf
OBJ = $(SRC:.c=.o)
$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(INC) $(PTHREAD)
all: $(NAME)
clean:
	@${RM} ${OBJ}
fclean: clean
	@${RM} ${SAVE}
	@${RM} ${NAME}
re: fclean all
.PHONY: all clean fclean re
