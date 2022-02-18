# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drobert- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 11:40:26 by drobert-          #+#    #+#              #
#    Updated: 2022/02/18 17:26:57 by drobert-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## VARIABLES

# This is a minimal set of ANSI/VT100 color codes
_END		=	\x1b[0m
_BOLD		=	\x1b[1m
_UNDER		=	\x1b[4m
_REV		=	\x1b[7m

# Colors
_GREY		=	\x1b[30m
_RED		=	\x1b[31m
_GREEN		=	\x1b[32m
_YELLOW		=	\x1b[33m
_BLUE		=	\x1b[34m
_PURPLE		=	\x1b[35m
_CYAN		=	\x1b[36m
_WHITE		=	\x1b[37m

# Inverted, i.e. colored backgrounds
_IGREY		=	\x1b[40m
_IRED		=	\x1b[41m
_IGREEN		=	\x1b[42m
_IYELLOW	=	\x1b[43m
_IBLUE		=	\x1b[44m
_IPURPLE	=	\x1b[45m
_ICYAN		=	\x1b[46m
_IWHITE		=	\x1b[47m

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
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c

BONUS =		ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c

OBJS =		$(SRCS:.c=.o)

BONUSO =	$(BONUS:.c=.o)
#OTHER VARS
NAME =		libft.a

.c.o:
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
	
# FUNCTIONS
all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "\033[32mLibrary created: $(NAME)"

bonus: $(OBJS) $(BONUSO)
	@$(AR) $(NAME) $(OBJS) $(BONUSO)
	@echo "$(_GREEN)Library created: $(_RED)$(NAME) $(_GREEN)($(_YELLOW)BONUS!$(_GREEN))$(_END)"


clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
