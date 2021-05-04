NAME = Zombie

SRCS = Zombie.cpp ZombieHorde.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

CXX = clang++

CXXFLAGS += -Wall -Wextra -std=c++98 -std=c++11 -O3

all : $(NAME)

$(NAME) : $(OBJS)

	@${CXX} ${CXXFLAGS} -o ${NAME} $(OBJS)

clean : 
	@/bin/rm -f $(OBJS)

fclean : clean
	@/bin/rm -f $(NAME)

re : fclean all