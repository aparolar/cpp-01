NAME		=	violence_not_necessary
CXX			=	clang++ $(CXXFLAGS) -std=c++98 -pedantic
42FLAGS		=	-Wall -Werror -Wextra
CXXFLAGS 	=	$(42FLAGS)
LDFLAGS		=	-fsanitize=address
SRCS		=	main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJS		=	$(SRCS:.cpp=.o)

$(NAME):		$(OBJS)
				$(CXX) $(SRCS) -o $(NAME)

all:			$(NAME)

re:				fclean all

clean:			
				rm -fr *.o

fclean:			clean
				rm -fr $(NAME)

.phony:			all re clean fclean
				
