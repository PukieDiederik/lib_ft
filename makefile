# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drobert- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 11:40:26 by drobert-          #+#    #+#              #
#    Updated: 2022/02/17 17:35:15 by drobert-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## VARIABLES

# PROGRAMS
CC =		cc

CFLAGS =	-Wall -Wextra -Werror

RM =		rm -f

AR =		ar -rc

# FILES
SRCS =		ft_atoi.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c \
			\
			ft_calloc.c \
			ft_strdup.c \
			\
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
#			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \

OBJS =		$(SRCS:.c=.o)

#OTHER VARS
NAME =		libft.a

.c.o:
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
	
# FUNCTIONS
all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "\033[32mLibrary Created: $(NAME)"

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
