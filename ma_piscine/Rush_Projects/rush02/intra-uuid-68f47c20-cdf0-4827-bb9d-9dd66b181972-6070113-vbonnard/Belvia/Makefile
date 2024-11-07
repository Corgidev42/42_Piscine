NAME = rush-02
SRC	= srcs/ft_putchar.c srcs/ft_putnbr.c srcs/ft_strcpy.c srcs/ft_strlen.c srcs/ft_count_lines.c srcs/ft_strdup.c srcs/ft_atoi.c srcs/ft_delete_space.c srcs/ft_read_file.c srcs/ft_read_line.c srcs/ft_store_entry.c
HEADER = ./includes/
OBJETS = ${SRCS:.c=.o} 
CC	= cc
RM	= rm -f
CFLAG	= -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}		
		${LIBS} ${NAME} ${OBJS}

%.o : %.c: 
		${CC} ${CFLAGS} -c $<-o ${<:.c=.o}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
