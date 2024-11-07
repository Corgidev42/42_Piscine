NAME = rush-02
SRC_DIR = ./srcs/
INC_DIR = ./includes/
SRC = $(SRC_DIR)parsing.c $(SRC_DIR)main.c
HEADER = ./includes/
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR)

#par defaut
all: ${NAME}

#compilation de l'exec
${NAME}: ${OBJS}
	${NAME} ${OBJS}

#compilation des fichiers objets
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

#suppression fichiers objets
clean :
	rm -f $(OBJS)

#supression complete
fclean : clean
	rm -f $(NAME)

#reconstruction conplete
re : fclean all


#Variable speciales
# $@ nom cibles
# $< nom premiere dependances
# $^ liste dependances
# $? liste dependances plus recentes que la cible
# $* nom fichier, sans son extension
