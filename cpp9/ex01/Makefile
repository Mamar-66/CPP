NAME	=	RPN 
CC	=	c++

CFLAGS	=	-Wall -Werror -Wextra -std=c++98 -g


SRC_PATH	=	srcs/
OBJ_PATH	=	objs/

SRC	=	main.cpp \
		RPN.cpp \

SRCS	=	$(addprefix $(SRC_PATH), $(SRC))

OBJS	=	$(SRCS:$(SRC_PATH)%.cpp=$(OBJ_PATH)%.o)

INCS	=	-I	./includes/

all:	$(OBJ_PATH) $(NAME)

$(OBJ_PATH):
			mkdir -p $(OBJ_PATH)

$(NAME):	$(OBJS)
	@echo "\033[0;33m\nCOMPILING Easy RPN ...\n"
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\033[1;32m./Easy RPN created\n"

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp
	$(CC) $(CFLAGS) -c $< -o $@ $(INCS)

clean:
		rm -rf $(OBJ_PATH)

fclean:	clean
		rm -rf $(NAME)

re:	fclean all

.PHONY:	all clean fclean re