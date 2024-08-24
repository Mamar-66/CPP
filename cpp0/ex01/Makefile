NAME	=	PhoneBook

CC	=	c++

CFLAGS	=	-Wall -Werror -Wextra -std=c++98 -g

SRC_PATH	=	srcs/
OBJ_PATH	=	objs/

SRC	=	main.cpp \
		recup_commande.cpp \
\
		contact/add.cpp \
		contact/contact.cpp \
\
		search/search.cpp \
\
		phonebook/phoneBook.cpp \


SRCS	=	$(addprefix $(SRC_PATH), $(SRC))
OBJ 	=	$(SRC:.cpp=.o)
OBJS	=	$(addprefix $(OBJ_PATH), $(OBJ))

INCS	=	-I	./includes/

all:	$(OBJ_PATH) $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp
	$(CC) $(CFLAGS) -c $< -o $@ $(INCS)

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)
	mkdir -p $(OBJ_PATH)/contact
	mkdir -p $(OBJ_PATH)/search
	mkdir -p $(OBJ_PATH)/phonebook

$(NAME):	$(OBJS)
	@echo "\033[0;33m\nCOMPILING PhoneBook...\n"
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\033[1;32m./PhoneBook created\n"

clean:
		rm -rf $(OBJ_PATH)

fclean:	clean
		rm -rf $(NAME)

re:	fclean all

.PHONY:	all clean fclean re