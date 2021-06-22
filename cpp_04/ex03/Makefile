NAME = Bocal

SRCS = main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp

OBJS = $(SRCS:.cpp=.o)

CXX = clang++

CXXFLAGS += -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJS)

	@${CXX} ${CXXFLAGS} -o ${NAME} $(OBJS)

clean : 
	@/bin/rm -f $(OBJS)

fclean : clean
	@/bin/rm -f $(NAME)

re : fclean all