/*
** EPITECH PROJECT, 2023
** headers
** File description:
** function for my_printf
*/
#include <stdarg.h>
#include <unistd.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdint.h>
#include <sys/types.h>
#include <pwd.h>

#ifndef MY
    #define MY

typedef struct find_pos {
    int ybis;
    int xbis;
    int x;
    int y;
}find_pos_t;

typedef struct find_square {
    int x;
    int y;
    int size;
}find_square_t;

void find_square(char **map);
int size_square(char **map, int y, int x);
int to_number(char const *str);
char *my_strdup(char const *str);
int reset_pattern(int nb_charpat, int taillepathern);
void print_and_free_2darr(int nb, char **map);
char **rempli_map_gen(char **genmap, int nb_linegen, char **av);
int gen_map(char **av);
char **rempli_map(int nbline, int nb_map, const char *map, char **mapc);
void nb_line_equal_line_one(char *buffer, int nb_line);
void print_map_and_free(int nb, char **map2darr, char *buffer);
char **my_str_to_word_array(char const *map, int nbline, int nb_mapsanslone);
char *map(char *av);
int error_size_char(int get_number, int nb_line, char *buffer);
int mapanalyse(char **av);
int my_get_number(const char *buffer);
void freemap(char **map, char *buffer, int nb_line);
int nb_map_sans_l_un(const char *str);
int my_strlen_nb_char(const char *str, int nb);
int error(char *av, char *buffer, int size);
int my_strlen_nb_line(const char *str);
int filesize(char *av);
int fs_open_file(char const *filepath);
void statfiles(void);
int return_nbtabdir(void);
int file_noexist(char **av, char **listdir, int nbdir);
int complement_ls(char **av, char **listdir, int nbdir);
int my_strcmp(char *str, char *list);
char **list(int nbdir);
void file_exist(char **av, char **filedir, int nbdir);
int return_nbtabdir(void);
void onefiledot(char **);
void lsclassic(void);
void allfiles(void);
int my_strlen(char *str);
void openfile_dir(char **av);
void display_output(int nb, int nbf, int count);
int percent_e(va_list args, const char *format, int *z);
void my_put_scientific_notation(double nb);
int percent_u(va_list args, const char *format, int *z);
int my_put_long_int(unsigned int n);
int my_put_u(long nb);
int percent_f(va_list agrs, const char *format, int *z);
int my_put_float(double nb);
void dif_de_percent(va_list args, const char *format, int *z);
int writeelse(const char *format, int *z);
int percent_s(va_list agrs, const char *format, int *z);
int percent_di(va_list args, const char *format, int *z);
int percent_c(va_list args, const char *format, int *z);
int percent_percent(const char *format, int *z);
int percent_exa(va_list args, const char *format, int *z);
int percent_examaj(va_list args, const char *format, int *z);
int percent_oct(va_list args, const char *format, int *z);
int my_printf(const char *format, ...);
int my_put_exa(int n);
int my_put_examaj(int n);
int my_put_oct(int i);
void my_putchar(char c);
int my_putstr(const char *str);
int my_put_nbr(int n);
int findflagnb(const char *str, char c);
#endif
