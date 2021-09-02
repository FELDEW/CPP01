NAME		=	zombies

SRCS		=	./main.cpp \
				./Zombie.cpp \
				./newZombie.cpp \
				./randomChump.cpp
	
OBJS		=	$(SRCS:.cpp=.o)

CPP			=	clang++

%.o:		%.cpp 
			$(CPP) $(CFLAGS) -c $< -o $(<:.cpp=.o)

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -f

all :		$(NAME)

$(NAME) :	$(OBJS)
			$(CPP) $(CFLAGS) -o $(NAME) $(OBJS) -I.
			@echo "print zombie's names as argumets of program"

clean :		
			$(RM) $(OBJS)

fclean 	:	clean
			$(RM) $(NAME)

re :		fclean all

.PHONY :	all clean fclean re