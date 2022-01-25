NAME 		= 	libft.a
CC 			= 	gcc
CFLAGS 		= 	-Wall -Werror -Wextra -c
AR 			= 	ar rcs
OBJ			= 	$(SOURCEFILES:%.c=%.o)
SOURCEFILES = 	ft_atoi.c\
				ft_bzero.c\
				ft_calloc.c\
				ft_isalnum.c\
				ft_isalpha.c\
				ft_isascii.c\
				ft_isdigit.c\
				ft_isprint.c\
				ft_itoa.c\
				ft_lstadd_back_bonus.c\
				ft_lstadd_front_bonus.c\
				ft_lstclear_bonus.c\
				ft_lstdelone_bonus.c\
				ft_lstiter_bonus.c\
				ft_lstlast_bonus.c\
				ft_lstmap_bonus.c\
				ft_lstnew_bonus.c\
				ft_lstsize_bonus.c\
				ft_memchr.c\
				ft_memcmp.c\
				ft_memcpy.c\
				ft_memmove.c\
				ft_memset.c\
				ft_putchar_fd.c\
				ft_putendl_fd.c\
				ft_putnbr_fd.c\
				ft_putstr_fd.c\
				ft_split.c\
				ft_strchr.c\
				ft_strdup.c\
				ft_striteri.c\
				ft_strjoin.c\
				ft_strlcat.c\
				ft_strlcpy.c\
				ft_strlen.c\
				ft_strmapi.c\
				ft_strncmp.c\
				ft_strnstr.c\
				ft_strrchr.c\
				ft_strtrim.c\
				ft_substr.c\
				ft_tolower.c\
				ft_toupper.c\
				
				
all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

$(OBJ): $(SOURCEFILES)
	$(CC) $(CFLAGS) $(SOURCEFILES)

clean: 
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

# NOTES:

# Form of rules (functions):
# 'Target': 'Prerequisites'
#			'Recipe'

# $ = call variable.
# @ = silencing the print of the command.
# % = to fill in prefix.
# -I. = option for gcc: you can specify searching the directory which 
# was current when the compiler was invoked.
# -c = option for gcc: do not run the linker (last step in compiling
# before it makes the execution file. it will make an .o file).