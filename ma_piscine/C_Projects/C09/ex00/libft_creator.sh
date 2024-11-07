#!/bin/bash
NAME="libft.a"
SRCS="ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c"
OBJS=""

echo "Compilation des fichiers sources..."
for FILE in $SRCS; do
	cc -Wall -Wextra -Werror -c $FILE -o ${FILE%.c}.o 
	OBJS+="${FILE%.c}.o "
done

echo "Creation de la bibliotheque $NAME ..."
ar rcs $NAME $OBJS 

echo "Suppressions des fichiers objets..."
rm -f $OBJS 

echo "Bibliotheque $NAME creee avec succes."