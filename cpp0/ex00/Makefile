NAME	=	megaphone

CC	=	c++

CFLAGS	=	-Wall -Werror -Wextra -std=c++98 -g

SRC_PATH	=	srcs/
OBJ_PATH	=	objs/

SRC	=	megaphone.cpp \

SRCS	=	$(addprefix $(SRC_PATH), $(SRC))
OBJ 	=	$(SRC:.cpp=.o)
OBJS	=	$(addprefix $(OBJ_PATH), $(OBJ))

all:	$(OBJ_PATH) $(NAME)

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
	@echo "\033[0;33m\nCOMPILING megaphone...\n"
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\033[1;32m./megaphone created\n"

clean:
		rm -rf $(OBJ_PATH)

fclean:	clean
		rm -rf $(NAME)

re:	fclean all

.PHONY:	all clean fclean re