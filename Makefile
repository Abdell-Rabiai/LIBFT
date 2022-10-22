# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arabiai <arabiai@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 19:23:05 by arabiai           #+#    #+#              #
#    Updated: 2022/10/22 14:59:50 by arabiai          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# MACROS / VARIABLES OF THE MAKEFILE
EXECUTABLE = libft.a

SOURCES = ft_isalpha.c ft_memcmp.c ft_strdup.c ft_strnstr.c \
		ft_atoi.c ft_isascii.c ft_memcpy.c ft_strlcat.c ft_strrchr.c \
		ft_bzero.c ft_isdigit.c ft_memmove.c ft_strlcpy.c ft_tolower.c \
		ft_calloc.c ft_isprint.c ft_memset.c ft_strlen.c ft_toupper.c \
		ft_isalnum.c ft_memchr.c ft_strchr.c ft_strncmp.c ft_strjoin.c ft_substr.c \
		ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_split.c \
    	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

BONUS_SOURCES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \

OBJECTS = $(SOURCES:.c=.o)

BONUS_OBJECTS = $(BONUS_SOURCES:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

HEADER_FILES = libft.h bonus.h

# THE Rules NEEDED FOR THE COMPILATION / 
all : $(EXECUTABLE)

$(EXECUTABLE) : $(OBJECTS) $(HEADER_FILES)
	ar rc $(EXECUTABLE) $(OBJECTS)

# THIS IS A GENERIC RULE 
%.o: %.c $(HEADER_FILES)
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "\033[92mCompiled the file : "$<" successfully!\033[0m"

so: for linux os
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SOURCES)
	$(CC) -nostartfiles -shared -o libft.so $(OBJECTS)

bonus : $(OBJECTS) $(BONUS_OBJECTS)
	ar rc $(EXECUTABLE) $(OBJECTS) $(BONUS_OBJECTS)

so_bonus:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(BONUS_SOURCES) \
	$(CC) -nostartfiles -shared -o libft.so $(BONUS_OBJECTS) \

clean :
	$(RM) $(OBJECTS) $(BONUS_OBJECTS)

fclean : clean
	$(RM) $(EXECUTABLE)

re : fclean all

.PHONY : clean fclean all re bonus