#include "mlx.h"
#define WIN_SIZE 500
#include "get_next_line.h"

typedef struct s_data
{
    int height;
    int width;
}               t_data;

t_data g_data;

char				**ft_split(char const *s, char c);
int			        ft_atoi(const char *str);
char	            *ft_substr(char const *s, unsigned int start, size_t len);
int		            ft_strlen(const char *s);