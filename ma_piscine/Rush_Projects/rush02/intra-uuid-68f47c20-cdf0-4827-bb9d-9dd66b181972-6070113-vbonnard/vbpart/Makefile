NAME = rush-02
SRC_DIR = ./src/
INC_DIR = ./includes/
SRC = $(SRC_DIR)cast.c $(SRC_DIR)main.c $(SRC_DIR)parsing.c $(SRC_DIR)tools.c
HEADER = $(INC_DIR)cast.h $(INC_DIR)parsing.h $(INC_DIR)tools.h
OBJS = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR)

# Par défaut
all: ${NAME}

# Compilation de l'exécutable
${NAME}: ${OBJS}
	$(CC) $(OBJS) -o ${NAME}

# Compilation des fichiers objets
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Suppression des fichiers objets
clean:
	rm -f $(OBJS)

# Suppression complète
fclean: clean
	rm -f ${NAME}

# Reconstruction complète
re: fclean all

# Variables spéciales
# $@ nom cibles
# $< nom première dépendance
# $^ liste dépendances
# $? liste dépendances plus récentes que la cible
# $* nom fichier, sans son extension
