NAME			= morpion

SRC				= 	srcs/morpion.c \
					srcs/init.c \


MLX				= libmlx42.a

MLX_PATH		= MLX42/build

CC				= cc

RM				= rm -f

OBJS			= ${SRC:.c=.o}

%.o: %.c
	$(CC) -c $< -o $@

all: ${NAME}
${NAME}: ${MLX} ${OBJS}
	${CC} -o ${NAME} ${OBJS} ${MLX} -lglfw

${MLX}:
	${MAKE} -C ${MLX_PATH}
	mv ${MLX_PATH}/${MLX} .

clean:
	${MAKE} clean -C ${MLX_PATH}
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME} ${MLX}

re: fclean all

.PHONY: all clean fclean re