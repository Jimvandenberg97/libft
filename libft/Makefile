# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jivan-de <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/30 19:31:23 by jivan-de      #+#    #+#                  #
#    Updated: 2019/11/05 19:22:50 by jivan-de      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra

SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
		ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c ft_strmapi.c \
		ft_strjoin.c ft_strtrim.c ft_itoa.c ft_split.c

SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
				ft_lstadd_back.c ft_lstiter.c ft_lstdelone.c ft_lstclear.c \
				ft_lstmap.c

INCLUDES = ./

OBJ = ${SRCS:.c=.o}

OBJ_BONUS = ${SRCS_BONUS:.c=.o}

HDR = libft.h

all: $(NAME)

$(NAME): compile $(SRCS) libft.h
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

compile:
	gcc $(FLAGS) -I$(INCLUDES) -c $(SRCS)

bonus: all $(OBJ_BONUS) libft.h
	ar rc $(NAME) $(OBJ_BONUS)
	ranlib $(NAME)

clean:
	rm -rf -f $(OBJ) $(OBJ_BONUS) a.out

fclean: clean
	rm -rf -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
