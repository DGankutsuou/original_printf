NAME = libft.a

CCW = cc -Wall -Wextra -Werror

M_SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c\
		ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
		ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c\
		ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c\
		ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c\
		ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c\
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
		ft_putendl_fd.c ft_putnbr_fd.c

B_SRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c\
		ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c\
		ft_lstiter_bonus.c ft_lstmap_bonus.c

M_OBJ = $(M_SRC:.c=.o)

B_OBJ = $(B_SRC:.c=.o)

all: $(NAME)

$(NAME): $(M_SRC) libft.h
	$(CCW) -c $(M_SRC)
	ar rc $@ $(M_OBJ)

clean:
	rm -f $(M_OBJ) $(B_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(B_OBJ)

$(B_OBJ):$(B_SRC) $(M_SRC) libft.h
	$(CC) -c $(B_SRC) $(M_SRC)
	ar rc $(NAME) $(M_OBJ) $(B_OBJ)

.PHONY: all clean fclean re bonus
