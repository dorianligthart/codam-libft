NAME        = libft.a
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -I libft.h

#MANDATORY PART#
    #chr:
    NAME_CHR    = toupper tolower isalpha isdigit isalnum isascii isprint
    SRC_CHR     = $(foreach item, $(NAME_CHR), src/chr/ft_$(item).c)
    #int:
    NAME_INT    = atoi itoa 
    SRC_INT     = $(foreach item, $(NAME_INT), src/int/ft_$(item).c)
    #mem:
    NAME_MEM    = bzero calloc memset memcpy memmove memchr memcmp
    SRC_MEM     = $(foreach item, $(NAME_MEM), src/mem/ft_$(item).c)
    #str:
    NAME_STR    = strchr strrchr strlen strnstr strlcpy strlcat strncmp strdup\
                  substr strjoin strtrim split striteri strmapi
    SRC_STR     = $(foreach item, $(NAME_STR), src/str/ft_$(item).c)
    #fd:
    NAME_FD     = putchar_fd putstr_fd putendl_fd putnbr_fd
    SRC_FD      = $(foreach item, $(NAME_FD), src/fd/ft_$(item).c)
#collect MANDATORY PART:
SRC_MANDATORY = $(SRC_CHR) $(SRC_INT) $(SRC_MEM) $(SRC_STR) $(SRC_FD)

#BONUS PART:
    NAME_BONUS  = lstnew lstadd_front lstadd_back\
                  lstiter lstsize lstlast lstdelone lstclear lstmap
    SRC_BONUS   = $(foreach item, $(NAME_BONUS), bonus/ft_$(item).c)

#OBJECTS:#
    OBJ         = $(SRC_MANDATORY:.c=.o)
    OBJ_BONUS   = $(SRC_BONUS:.c=.o)

#MAKE:#
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
all: $(NAME)
bonus: $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ_BONUS)
clean:
	rm -f $(OBJ) $(OBJ_BONUS)
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME)

.PHONY: all bonus clean fclean re