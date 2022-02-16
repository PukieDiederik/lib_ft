# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drobert- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 11:40:26 by drobert-          #+#    #+#              #
#    Updated: 2022/02/16 15:23:45 by drobert-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## VARIABLES

# PROGRAMS
CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar -rc

# FILES
SRCS = ft_atoi.c \
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

OBJS = $(SRCS:.c=.o)

#OTHER VARS
NAME = libft.a

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
	
# FUNCTIONS
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
