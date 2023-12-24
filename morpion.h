#ifndef MORPION_H
# define MORPION_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <MLX42/MLX42.h>

#define WIDTH 500
#define HEIGHT 500




typedef struct s_img{
mlx_texture_t	*texture_fond_morpion;
mlx_image_t		*fond_morpion;
mlx_texture_t	*texture_player_1_turn_morpion;
mlx_image_t		*img_player_1_turn_morpion;
mlx_texture_t	*texture_player_2_turn_morpion;
mlx_image_t		*img_player_2_turn_morpion;
mlx_texture_t	*texture_cross_morpion;
mlx_image_t		*img_cross_morpion;
mlx_texture_t	*texture_round_morpion;
mlx_image_t		*img_round_morpion;
}				t_img;

typedef struct s_verif{
int kp_1 ;
int kp_2 ;
int kp_3 ;
int kp_4 ;
int kp_5 ;
int kp_6 ;
int kp_7 ;
int kp_8 ;
int kp_9 ;
}				t_verif;

typedef struct s_morpion{
mlx_t   *mlx;
t_img   img;
t_verif verif;
int     player_turn;
}				t_morpion;

void    init(t_morpion *t_morpion);
void display_fond(t_morpion *t_morpion);
void    key_press(mlx_key_data_t keydata ,t_morpion *t_morpion);
int main();

#endif