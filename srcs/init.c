#include "../morpion.h"

void	init(t_morpion *t_morpion)
{
	t_morpion->player_turn = 1;
	t_morpion->all_filled = 0;
	t_morpion->win = 0;
	t_morpion->verif.kp_1 = 0;
	t_morpion->verif.kp_2 = 0;
	t_morpion->verif.kp_3 = 0;
	t_morpion->verif.kp_4 = 0;
	t_morpion->verif.kp_5 = 0;
	t_morpion->verif.kp_6 = 0;
	t_morpion->verif.kp_7 = 0;
	t_morpion->verif.kp_8= 0;
	t_morpion->verif.kp_9 = 0;
	int i = 0;
	t_morpion->map = malloc(sizeof(char *) * 3);
	while (i < 3)
	{
		t_morpion->map[i] = malloc(sizeof(char) * 3);
		t_morpion->map[i] = strcpy(t_morpion->map[i], "000");
		t_morpion->map[i][3] = '\0';
		i++;
	}
/*-----------------------------------------------FOND-----------------------------------------------------------------------------------------*/
/**/	t_morpion->img.texture_fond_morpion = mlx_load_png("img/fond.png");																	/**/
/**/	t_morpion->img.fond_morpion = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_fond_morpion);							/**/
/*--------------------------------------------------------------------------------------------------------------------------------------------*/
/*-----------------------------------------------PLAYER-TURN----------------------------------------------------------------------------------*/
/**/	t_morpion->img.texture_player_1_turn_morpion = mlx_load_png("img/morpion_player_1_turn.png");										/**/
/**/	t_morpion->img.img_player_1_turn_morpion = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_player_1_turn_morpion);		/**/
/**/	t_morpion->img.texture_player_2_turn_morpion = mlx_load_png("img/morpion_player_2_turn.png");										/**/
/**/	t_morpion->img.img_player_2_turn_morpion = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_player_2_turn_morpion);		/**/
/*--------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------CROSS-&-ROUND-----------------------------------------------------------------------------------*/
/**/	t_morpion->img.texture_cross_morpion = mlx_load_png("img/morpion_cross.png");														/**/
/**/	t_morpion->img.img_cross_morpion = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_cross_morpion);						/**/
/**/	t_morpion->img.texture_round_morpion = mlx_load_png("img/morpion_round.png");														/**/
/**/	t_morpion->img.img_round_morpion = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_round_morpion);						/**/
/*--------------------------------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------ALL-FILLED----------------------------------------------------------------------------------*/
/**/	t_morpion->img.texture_fond_all_filled = mlx_load_png("img/all_filled_morpion.png");												/**/
/**/	t_morpion->img.fond_all_filled = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_fond_all_filled);						/**/
/*--------------------------------------------------------------------------------------------------------------------------------------------*/
/*----------------------------------------------------WIN-IMG---------------------------------------------------------------------------------*/
/**/	t_morpion->img.texture_win_p_1_1 = mlx_load_png("img/p_1_win_1.png");																/**/
/**/	t_morpion->img.img_win_p_1_1 = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_win_p_1_1);								/**/
/**/	t_morpion->img.texture_win_p_2_1 = mlx_load_png("img/p_2_win_1.png");																/**/
/**/	t_morpion->img.img_win_p_2_1 = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_win_p_2_1);								/**/
/**/	t_morpion->img.texture_win_p_1_2 = mlx_load_png("img/p_1_win_2.png");																/**/
/**/	t_morpion->img.img_win_p_1_2 = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_win_p_1_2);								/**/
/**/	t_morpion->img.texture_win_p_2_2 = mlx_load_png("img/p_2_win_2.png");																/**/
/**/	t_morpion->img.img_win_p_2_2 = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_win_p_2_2);								/**/
/**/	t_morpion->img.texture_win_p_1_3 = mlx_load_png("img/p_1_win_3.png");																/**/
/**/	t_morpion->img.img_win_p_1_3 = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_win_p_1_3);								/**/
/**/	t_morpion->img.texture_win_p_2_3 = mlx_load_png("img/p_2_win_3.png");																/**/
/**/	t_morpion->img.img_win_p_2_3 = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_win_p_2_3);								/**/
/**/	t_morpion->img.texture_win_p_1_4 = mlx_load_png("img/p_1_win_4.png");																/**/
/**/	t_morpion->img.img_win_p_1_4 = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_win_p_1_4);								/**/
/**/	t_morpion->img.texture_win_p_2_4 = mlx_load_png("img/p_2_win_4.png");																/**/
/**/	t_morpion->img.img_win_p_2_4 = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_win_p_2_4);								/**/
/**/	t_morpion->img.texture_win_p_1_5 = mlx_load_png("img/p_1_win_5.png");																/**/
/**/	t_morpion->img.img_win_p_1_5 = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_win_p_1_5);								/**/
/**/	t_morpion->img.texture_win_p_2_5 = mlx_load_png("img/p_2_win_5.png");																/**/
/**/	t_morpion->img.img_win_p_2_5 = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_win_p_2_5);								/**/
/**/	t_morpion->img.texture_win_p_1_5 = mlx_load_png("img/p_1_win_5.png");																/**/
/**/	t_morpion->img.img_win_p_1_5 = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_win_p_1_5);								/**/
/**/	t_morpion->img.texture_win_p_2_5 = mlx_load_png("img/p_2_win_5.png");																/**/
/**/	t_morpion->img.img_win_p_2_5 = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_win_p_2_5);								/**/
/**/	t_morpion->img.texture_win_p_1_6 = mlx_load_png("img/p_1_win_6.png");																/**/
/**/	t_morpion->img.img_win_p_1_6 = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_win_p_1_6);								/**/
/**/	t_morpion->img.texture_win_p_2_6 = mlx_load_png("img/p_2_win_6.png");																/**/
/**/	t_morpion->img.img_win_p_2_6 = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_win_p_2_6);								/**/
/**/	t_morpion->img.texture_win_p_1_7 = mlx_load_png("img/p_1_win_7.png");																/**/
/**/	t_morpion->img.img_win_p_1_7 = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_win_p_1_7);								/**/
/**/	t_morpion->img.texture_win_p_2_7 = mlx_load_png("img/p_2_win_7.png");																/**/
/**/	t_morpion->img.img_win_p_2_7 = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_win_p_2_7);								/**/
/**/	t_morpion->img.texture_win_p_1_8 = mlx_load_png("img/p_1_win_8.png");																/**/
/**/	t_morpion->img.img_win_p_1_8 = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_win_p_1_8);								/**/
/**/	t_morpion->img.texture_win_p_2_8 = mlx_load_png("img/p_2_win_8.png");																/**/
/**/	t_morpion->img.img_win_p_2_8 = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_win_p_2_8);								/**/
/*--------------------------------------------------------------------------------------------------------------------------------------------*/
	return ;
}