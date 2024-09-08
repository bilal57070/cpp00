SRCS = contact.cpp phonebook.cpp main.cpp
OBJS = ${SRCS:.cpp=.o}
NAME = phonebook
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++17
RM = rm -rf

all: ${NAME}

${NAME}: ${OBJS}
	@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

%.o: %.cpp
	@${CC} ${CFLAGS} -c -I . $< -o $@

clean:
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re