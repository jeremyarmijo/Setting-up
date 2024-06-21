##
## EPITECH PROJECT, 2023
## makefile
## File description:
## pour my_printf
##

CC	=	gcc

SRC	=	src/my_putchar.c					\
		src/my_put_nbr.c					\
		src/my_putstr.c						\
		src/findflagnb.c					\
		src/my_put_exa.c					\
		src/my_put_oct.c					\
		src/my_put_examaj.c					\
		src/percent_s.c						\
		src/percent_di.c					\
		src/percent_c.c						\
		src/percent_percent.c				\
		src/percent_exa.c					\
		src/percent_examaj.c				\
		src/percent_oct.c					\
		src/my_printf.c						\
		src/writeelse.c						\
		src/if.c							\
		src/percent_f.c						\
		src/my_put_float.c					\
		src/my_put_scientific_notation.c	\
		src/percent_e.c						\
		src/display_output.c				\
		src/my_put_long_int.c				\
		src/percent_u.c						\
		src/my_put_u.c						\
		src/openfile_dir.c					\
		src/my_strlen.c						\
		src/allfiles.c						\
		src/lsclassic.c						\
		src/onefiledot.c					\
		src/file_exist.c					\
		src/my_strcmp.c						\
		src/list.c							\
		src/complement_ls.c					\
		src/file_noexist.c					\
		src/return_nbtabdir.c				\
		src/statfiles.c						\
		src/setting_up.c					\
		src/fs_open_file.c					\
		src/file_size.c						\
		src/my_strlen_nb_line.c				\
		src/error.c							\
		src/my_strlen_nb_char.c				\
		src/nb_oct_map_sans_l_one.c			\
		src/freemap.c						\
		src/fs_get_number_from_first_line.c	\
		src/map_analyse.c					\
		src/my_str_to_word_array.c			\
		src/find_square.c

OBJ	=	$(SRC:.c=.o)

NAME	=	setting_up

CFLAGS	=	-Wall -Wextra -iquote include

CCFLAGS = -g3

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)
	rm -f *#
	rm -f *~

debug:
	$(NAME)
	$(CC) $(CFLAGS) $(NAME) $(CCFLAGS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
