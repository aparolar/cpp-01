NAME		=	Karen2.0
CXX			=	clang++ $(CXXFLAGS) -std=c++98 -pedantic
42FLAGS		=	-Wall -Werror -Wextra
CXXFLAGS 	=	$(42FLAGS)
LDFLAGS		=	-fsanitize=address -g3
SRCS		=	main.cpp Karen.cpp
OBJS		=	$(SRCS:.cpp=.o)

$(NAME):		$(OBJS)
				$(CXX) $(SRCS) -o $(NAME)

all:			$(NAME)

re:				fclean all

clean:			
				rm -f *.o

fclean:			clean
				rm -f $(NAME)

.phony:			all re clean fclean
				
