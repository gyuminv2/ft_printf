SRCS		=	./ft_printf/ft_printf.c\
			./ft_printf/ft_printf_utils.c

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
AR = ar rcs
LIBFTDIR = ./Libft

all : $(NAME)

$(NAME) : $(OBJS)
						cp $(LIBFTDIR)/libft.a $@
						$(AR) $@ $^

clean :
						make clean -C $(LIBFTDIR)
						$(RM) $(OBJS)

fclean : clean
						make fclean -C $(LIBFTDIR)
						$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re