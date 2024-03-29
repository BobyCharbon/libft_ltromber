SRCS= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memcmp.c ft_memmove.c ft_toupper.c ft_tolower.c ft_strncmp.c  ft_memchr.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_strtrim.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_split.c ft_strmapi.c ft_striteri.c
BONUS_SRCS  = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c

#SRCS_GNL = get_next_line_utils.c get_next_line.c
#SRCS_PRINTF = ft_print_c.c ft_print_d.c ft_print_p.c ft_print_s.c ft_print_u.c ft_print_x.c ft_print_xmaj.c ft_printf.c

NAME := libft.a
PRINTF_DIR = ./printf/
PRINTF_HEADER = ./printf/libftprintf.a

GNL_DIR = ./get_next_line/
GNL_HEADER = ./get_next_line/get_next_line.a

OBJS= ${SRCS:.c=.o}

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

CFLAGS= -Wall -Werror -Wextra
PRINTF = printf

all: $(NAME)

bonus:	$(BONUS_OBJS)
		ar -rcs $(NAME) $(BONUS_OBJS)

.c.o:
	@echo Compiling $<
	gcc -c $(CFLAGS) $< -o ${<:.c=.o}

$(NAME): $(OBJS)
	@echo make $(NAME)
	ar -rcs $(NAME) $(OBJS)
	@$(MAKE) -sC $(PRINTF_DIR)
	@$(CC) $(CFLAGS) -o $@ $(OBJS) $(PRINTF_HEADER)

re:	fclean $(NAME)

clean:
	@echo Cleaning out those old .o
	@$(MAKE) -sC $(PRINTF_DIR) clean
	@rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	@echo Cleaning out that old $(NAME)
	@$(MAKE) -sC $(PRINTF_DIR) fclean
	@rm -f $(NAME)

out:
	gcc $(CFLAGS) $(SRCS)

a:	fclean
	@$(MAKE) -sC $(PRINTF_DIR) fclean
	$(RM) a.out
	$(MAKE)
	$(CC) -g $(CFLAGS) $(PRINTF_HEADER) $(SRCS)

cleanout:
	rm a.out

.PHONY:        all clean fclean re

