# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drobert- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 11:40:26 by drobert-          #+#    #+#              #
#    Updated: 2022/03/22 15:30:47 by drobert-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## VARIABLES
BLACK 					=	\033[0;30m
RED						=	\033[0;31m
GREEN					=	\033[0;32m
ORANGE					=	\033[0;33m
BLUE					=	\033[0;34m
PURPLE					=	\033[0;35m
CYAN					=	\033[0;36m
GRAY					=	\033[0;37m
WHITE					=	\033[0;38m
RESET					=	\033[0m


# PROGRAMS
CC =		cc

CFLAGS =	-Wall -Wextra -Werror

RM =		rm -rf

AR =		ar -rc

ECHO	= echo -e

# FILES
F_CORE		=	ft_atoi.c \
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

F_LIST		=	ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstmap_bonus.c

F_GNL		=	get_next_line.c \
				get_next_line_utils.c

# Source files
SRC_CORE		=	$(addprefix $(DIR_SRC)/$(DIR_SRC_CORE)/,$(F_CORE))
SRC_LIST		=	$(addprefix $(DIR_SRC)/$(DIR_SRC_LIST)/,$(F_LIST))
SRC_GNL			=	$(addprefix $(DIR_SRC)/$(DIR_SRC_GNL)/,$(F_GNL))


# Object files
OBJ_CORE		=	$(addprefix $(DIR_OBJ)/,$(notdir $(SRC_CORE:.c=.o)))
OBJ_LIST		=	$(addprefix $(DIR_OBJ)/,$(notdir $(SRC_LIST:.c=.o)))
OBJ_GNL			=	$(addprefix $(DIR_OBJ)/,$(notdir $(SRC_GNL:.c=.o) ))



# Directories
DIR_OBJ			=	obj
DIR_SRC			=	src
DIR_INC			=	include
DIR_BUILD		=	.build

DIR_SRC_CORE	=	core
DIR_SRC_LIST	=	list
DIR_SRC_GNL		=	gnl


INCLUDE	=	-I $(DIR_INC)

BONUSO		=	$(BONUS:.c=.o)


#OTHER VARS
NAME =		libft.a

all: core list gnl

$(DIR_OBJ)/%.o: $(DIR_SRC)/%.c | $(DIR_OBJ)
	@$(ECHO) "$(GREEN)>>>>> Compiling $(RESET)$(notdir $<)$(GREEN) -> $(RESET)$(notdir $@)$(RESET)"
	@gcc $(CFLAGS) -c $(INCLUDE) $< -o $@

$(DIR_OBJ)/%.o: $(DIR_SRC)/*/%.c | $(DIR_OBJ)
	@$(ECHO) "$(GREEN)>>>>> Compiling $(RESET)$(notdir $<)$(GREEN) -> $(RESET)$(notdir $@)$(RESET)"
	@gcc $(CFLAGS) -c $(INCLUDE) $< -o $@

$(DIR_OBJ) $(DIR_BUILD):
	mkdir $@

# FUNCTIONS
$(NAME): $(OBJ_CORE)
	@$(AR) $(NAME) $(OBJ_CORE)
	@$(ECHO) "$(GREEN)Library created: $(RESET)$(NAME)"

$(DIR_BUILD)/list: $(OBJ_LIST) | $(DIR_BUILD) $(NAME)
	@$(AR) $(NAME) $(OBJ_LIST)
	touch $@

$(DIR_BUILD)/gnl: $(OBJ_GNL) | $(DIR_BUILD) $(NAME)
	@$(AR) $(NAME) $(OBJ_GNL)
	touch $@

# Will make basic libft
core: $(NAME) $(OBJ_CORE)

# Will add linked lists to libft
list: $(DIR_BUILD)/list

# Will add get next line to libft
gnl: $(DIR_BUILD)/gnl

#bonus: $(OBJS) $(BONUSO)
#	@$(AR) $(NAME) $(OBJS) $(BONUSO)
#	@$(ECHO) "$(_GREEN)Library created: $(_RED)$(NAME) $(_GREEN)($(_YELLOW)BONUS!$(_GREEN))$(_END)"



clean:
	$(RM) $(OBJ_CORE) $(OBJ_LIST) $(OBJ_GNL)
	$(RM) $(DIR_BUILD)/list $(DIR_BUILD)/gnl

fclean: clean
	@$(RM) $(NAME) $(DIR_OBJ) $(DIR_BUILD)

re: fclean all

.PHONY: all gnl list core
