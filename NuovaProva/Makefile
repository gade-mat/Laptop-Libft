# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gade-mat <gade-mat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/30 21:59:14 by gade-mat          #+#    #+#              #
#    Updated: 2024/01/30 21:59:19 by gade-mat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=					libft.a


SRC=					ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcat.c ft_toupper.c ft_tolower.c \
						ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
						ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strlcpy.c

OBJ =					${SRC:.c=.o}

BONUS			=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
					ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
					ft_lstmap.c ft_lstnew.c ft_lstsize.c

BONUS_OBJS		= $(BONUS:.c=.o)

CC =					gcc -Wall -Wextra -Werror

RM =						rm -f


.c.o:
		${CC}  -g -c $< -o ${<:.c=.o}

${NAME}:				${OBJ} 
						ar rc ${NAME} ${OBJ}

all:	${NAME}

clean: 			
					${RM} ${OBJ} $(BONUS_OBJS)

fclean:				clean
					${RM} ${NAME} $(BONUS_OBJS)
						


re:		fclean all

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonus