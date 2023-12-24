#include "../morpion.h"

void    init(t_morpion *t_morpion)
{
    t_morpion->player_turn = 1;

    t_morpion->verif.kp_1 = 0;
    t_morpion->verif.kp_2 = 0;
    t_morpion->verif.kp_3 = 0;
    t_morpion->verif.kp_4 = 0;
    t_morpion->verif.kp_5 = 0;
    t_morpion->verif.kp_6 = 0;
    t_morpion->verif.kp_7 = 0;
    t_morpion->verif.kp_8= 0;
    t_morpion->verif.kp_9 = 0;



    t_morpion->img.texture_fond_morpion = mlx_load_png("img/fond.png");
    t_morpion->img.fond_morpion = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_fond_morpion);

    t_morpion->img.texture_player_1_turn_morpion = mlx_load_png("img/morpion_player_1_turn.png");
    t_morpion->img.img_player_1_turn_morpion = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_player_1_turn_morpion);

    t_morpion->img.texture_player_2_turn_morpion = mlx_load_png("img/morpion_player_2_turn.png");
    t_morpion->img.img_player_2_turn_morpion = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_player_2_turn_morpion);

    t_morpion->img.texture_cross_morpion = mlx_load_png("img/morpion_cross.png");
    t_morpion->img.img_cross_morpion = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_cross_morpion);

    t_morpion->img.texture_round_morpion = mlx_load_png("img/morpion_round.png");
    t_morpion->img.img_round_morpion = mlx_texture_to_image(t_morpion->mlx, t_morpion->img.texture_round_morpion);

    return ;
}