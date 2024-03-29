# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ephantom <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/20 15:49:07 by ephantom          #+#    #+#              #
#    Updated: 2021/10/25 13:13:20 by ephantom         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_isalpha.c	ft_isdigit.c	ft_isalnum.c\
			ft_isascii.c	ft_isprint.c	ft_strlen.c\
			ft_memset.c		ft_bzero.c		ft_memcpy.c\
			ft_memmove.c	ft_strlcpy.c	ft_strlcat.c\
			ft_toupper.c	ft_tolower.c	ft_strchr.c\
			ft_strrchr.c	ft_strncmp.c	ft_memchr.c\
			ft_memcmp.c		ft_strnstr.c	ft_atoi.c\
			ft_strdup.c		ft_calloc.c		ft_substr.c\
			ft_strjoin.c	ft_putchar_fd.c ft_putstr_fd.c\
			ft_putendl_fd.c ft_putnbr_fd.c	ft_strtrim.c\
			ft_strmapi.c	ft_striteri.c	ft_itoa.c\
			ft_split.c

SRCS_B	=	ft_lstnew.c		ft_lstadd_front.c	ft_lstsize.c\
			ft_lstlast.c	ft_lstadd_back.c	ft_lstdelone.c\
			ft_lstclear.c	ft_lstiter.c		ft_lstmap.c

HEADER	=	libft.h

OBJS	=	${SRCS:%.c=%.o}

OBJS_B	=	${SRCS_B:%.c=%.o}

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror -I${HEADER}

RM		=	 rm -f

.PHONY:		all clean fclean re bonus

all:		${NAME}

${NAME}:	${OBJS} ${HEADER}
			ar rcs ${NAME} $? 

%.o: 		%.c ${HEADER}
			${CC} ${CFLAGS} -c $< -o $@

bonus:		
			@make OBJ='$(OBJS_B)' all

clean:		
			${RM} ${OBJS} ${OBJS_B}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
