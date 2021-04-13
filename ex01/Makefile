NAME = phonebook

SRCS = phonebook.cpp

OBJS = $(SRCS:.cpp=.o)

CXX = clang++

CXXFLAGS += -Wall -Wextra -std=c++98

all : $(NAME)

$(NAME) : $(OBJS)

	@${CXX} ${CXXFLAGS} -o ${NAME} $(OBJS)

clean : 
	@/bin/rm -f $(OBJS)

fclean : clean
	@/bin/rm -f $(NAME)

re : fclean all