NAME	=	fragTrap

CC	=	c++

CFLAGS	=	-Wall -Werror -Wextra -std=c++98 -g

SRCS	=	main.cpp \
			ClapTrap.cpp \
			FragTrap.cpp \


OBJS	=	$(SRCS:%.CPP=%.O)

INCS	=	-I	./includes/

all:	$(NAME)

$(NAME):	$(OBJS)
	@echo "\033[0;33m\nCOMPILING fragTrap...\n"
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\033[1;32m./fragTrap created\n"

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp
	$(CC) $(CFLAGS) -c $< -o $@ $(INCS)

clean:
		rm -rf $(OBJ_PATH)

fclean:	clean
		rm -rf $(NAME)

re:	fclean all

.PHONY:	all clean fclean re