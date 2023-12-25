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
/*-------------------------FOND---------------------------*/
/**/	mlx_texture_t	*texture_fond_morpion;			/**/
/**/	mlx_image_t		*fond_morpion;					/**/
/*--------------------------------------------------------*/
/*--------------------PLAYER-1-&-2------------------------*/
/**/	mlx_texture_t	*texture_player_1_turn_morpion;	/**/
/**/	mlx_image_t		*img_player_1_turn_morpion;		/**/
/**/	mlx_texture_t	*texture_player_2_turn_morpion;	/**/
/**/	mlx_image_t		*img_player_2_turn_morpion;		/**/
/*--------------------------------------------------------*/
/*-------------------ROUND-&-CROSS------------------------*/
/**/	mlx_texture_t	*texture_cross_morpion;			/**/
/**/	mlx_image_t		*img_cross_morpion;				/**/
/**/	mlx_texture_t	*texture_round_morpion;			/**/
/**/	mlx_image_t		*img_round_morpion;				/**/
/*--------------------------------------------------------*/
/*-------------------ALL-FILLED---------------------------*/
/**/	mlx_texture_t	*texture_fond_all_filled;		/**/
/**/	mlx_image_t		*fond_all_filled;				/**/
/*--------------------------------------------------------*/
/*---------------------WIN-IMG----------------------------*/
/**/    mlx_texture_t	*texture_win_p_1_1;     		/**/
/**/	mlx_image_t		*img_win_p_1_1;         		/**/
/**/	mlx_texture_t	*texture_win_p_2_1;     		/**/
/**/	mlx_image_t		*img_win_p_2_1;         		/**/
/**/	mlx_texture_t	*texture_win_p_1_2;     		/**/
/**/	mlx_image_t		*img_win_p_1_2;         		/**/
/**/	mlx_texture_t	*texture_win_p_2_2;     		/**/
/**/	mlx_image_t		*img_win_p_2_2;         		/**/
/**/	mlx_texture_t	*texture_win_p_1_3;     		/**/
/**/	mlx_image_t		*img_win_p_1_3;         		/**/
/**/	mlx_texture_t	*texture_win_p_2_3;     		/**/
/**/	mlx_image_t		*img_win_p_2_3;         		/**/
/**/	mlx_texture_t	*texture_win_p_1_4;     		/**/
/**/	mlx_image_t		*img_win_p_1_4;         		/**/
/**/	mlx_texture_t	*texture_win_p_2_4;     		/**/
/**/	mlx_image_t		*img_win_p_2_4;         		/**/
/**/	mlx_texture_t	*texture_win_p_1_5;     		/**/
/**/	mlx_image_t		*img_win_p_1_5;         		/**/
/**/	mlx_texture_t	*texture_win_p_2_5;     		/**/
/**/	mlx_image_t		*img_win_p_2_5;         		/**/
/**/	mlx_texture_t	*texture_win_p_1_6;     		/**/
/**/	mlx_image_t		*img_win_p_1_6;         		/**/
/**/	mlx_texture_t	*texture_win_p_2_6;     		/**/
/**/	mlx_image_t		*img_win_p_2_6;         		/**/
/**/	mlx_texture_t	*texture_win_p_1_7;     		/**/
/**/	mlx_image_t		*img_win_p_1_7;         		/**/
/**/	mlx_texture_t	*texture_win_p_2_7;     		/**/
/**/	mlx_image_t		*img_win_p_2_7;         		/**/
/**/	mlx_texture_t	*texture_win_p_1_8;     		/**/
/**/	mlx_image_t		*img_win_p_1_8;         		/**/
/**/	mlx_texture_t	*texture_win_p_2_8;     		/**/
/**/	mlx_image_t		*img_win_p_2_8;         		/**/
/*--------------------------------------------------------*/
}				t_img;

typedef struct s_verif{
int	kp_1 ;
int	kp_2 ;
int	kp_3 ;
int	kp_4 ;
int	kp_5 ;
int	kp_6 ;
int	kp_7 ;
int	kp_8 ;
int	kp_9 ;
}				t_verif;

typedef struct s_morpion{
mlx_t	*mlx;
t_img	img;
t_verif	verif;
char	**map;
int		all_filled;
int		win;
int		player_turn;
}				t_morpion;

void	init(t_morpion *t_morpion);
void	display_fond(t_morpion *t_morpion);
void	key_press(mlx_key_data_t keydata ,t_morpion *t_morpion);
void	verif_win(t_morpion *t_morpion);
void	retry(t_morpion *t_morpion);
void	mousepress(double xmouse, double ymouse, t_morpion *t_morpion);
int		main();

#endif