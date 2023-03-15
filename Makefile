FLAG = -Wall -Wextra -Werror

CC = gcc

NAME = libft.a

SOURCE = ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putstr_fd.c \
		ft_putnbr_fd.c \
		ft_strchr.c \
		ft_strlen.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_memchr.c \
		ft_atoi.c \
		ft_memcmp.c \
		ft_strjoin.c \
		ft_memmove.c \
		ft_strrchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_strtrim.c \
		ft_split.c \

BONUS = ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstsize.c \

OBJECT = $(SOURCE:%.c=%.o)

BONUS_OBJECT = $(BONUS:%.c=%.o)

all: $(NAME)

%.o: %.c
	$(CC) $(FLAG) -o $@ -c $<

$(NAME):	$(OBJECT) $(BONUS_OBJECT)
					gcc $(FLAGS) -c $(SOURCE) $(BONUS) -I./
					ar rc  $(NAME) $(OBJECT) $(BONUS_OBJECT)

bonus: 		$(OBJECT) $(BONUS_OBJECT)
					ar src  $(NAME) $(OBJECT) $(BONUS_OBJECT)

clean:				
					rm -f $(OBJECT) $(BONUS_OBJECT)

fclean:		clean	
					rm -f $(NAME)

re:			fclean all