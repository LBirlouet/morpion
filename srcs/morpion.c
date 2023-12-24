#include "../morpion.h"

int main()
{
    t_morpion t_morpion;
	if (!(t_morpion.mlx = mlx_init(WIDTH, HEIGHT, "Morpion", false)))
	{
		puts(mlx_strerror(mlx_errno));
		return 0;
	}
    init(&t_morpion);
    display_fond(&t_morpion);
    mlx_key_hook(t_morpion.mlx, (mlx_keyfunc)key_press, &t_morpion);
    mlx_cursor_hook(t_morpion.mlx, (mlx_cursorfunc)mousepress, &t_morpion);


    mlx_loop(t_morpion.mlx);
	mlx_terminate(t_morpion.mlx);
	return 0;
}

void    mousepress(double xmouse, double ymouse, t_morpion *t_morpion)
{
    /*---MOUSE EN BAS A DROITE---*/
    if(((xmouse >= 100 && xmouse <= 195) && (ymouse >= 325 && ymouse <= 420)) && mlx_is_key_down(t_morpion->mlx, MLX_KEY_KP_ENTER))
    {
        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_1 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 120, 340);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
            t_morpion->verif.kp_1 = 1;
            t_morpion->player_turn = 2;
        }
        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_1 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 120, 340);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
            t_morpion->verif.kp_1 = 1;
            t_morpion->player_turn = 1;
        }
    }
    /*---MOUSE EN BAS AU MILIEU---*/
    else if(((xmouse >= 200 && xmouse <= 295) && (ymouse >= 325 && ymouse <= 420)) && mlx_is_key_down(t_morpion->mlx, MLX_KEY_KP_ENTER))
    {
        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_2 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 220, 340);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
            t_morpion->verif.kp_2 = 1;
            t_morpion->player_turn = 2;
        }
        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_2 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 220, 340);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
            t_morpion->verif.kp_2 = 1;
            t_morpion->player_turn = 1;
        }
    }
    /*---MOUSE EN BAS A GAUCHE---*/
    else if(((xmouse >= 300 && xmouse <= 395) && (ymouse >= 325 && ymouse <= 420)) && mlx_is_key_down(t_morpion->mlx, MLX_KEY_KP_ENTER))
    {
        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_3 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 320, 340);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
            t_morpion->verif.kp_3 = 1;
            t_morpion->player_turn = 2;
        }
        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_3 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 320, 340);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
            t_morpion->verif.kp_3 = 1;
            t_morpion->player_turn = 1;
        }
    }
    /*---MOUSE AU MILIEU A GAUCHE---*/
    else if(((xmouse >= 100 && xmouse <= 195) && (ymouse >= 220 && ymouse <= 320)) && mlx_is_key_down(t_morpion->mlx, MLX_KEY_KP_ENTER))
    {
        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_4 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 120, 240);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
            t_morpion->verif.kp_4 = 1;
            t_morpion->player_turn = 2;
        }
        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_4 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 120, 240);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
            t_morpion->verif.kp_4 = 1;  
            t_morpion->player_turn = 1;
        }
    }
    /*---MOUSE AU MILIEU AU MILIEU---*/
    else if(((xmouse >= 200 && xmouse <= 295) && (ymouse >= 220 && ymouse <= 320)) && mlx_is_key_down(t_morpion->mlx, MLX_KEY_KP_ENTER))
    {
        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_5 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 220, 240);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
            t_morpion->verif.kp_5 = 1;    
            t_morpion->player_turn = 2;
        }
        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_5 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 220, 240);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
            t_morpion->verif.kp_5 = 1; 
            t_morpion->player_turn = 1;
        }
    }
    /*---MOUSE AU MILIEU AU DROITE---*/
    else if(((xmouse >= 300 && xmouse <= 395) && (ymouse >= 220 && ymouse <= 320)) && mlx_is_key_down(t_morpion->mlx, MLX_KEY_KP_ENTER))
    {
        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_6 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 320, 240);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
            t_morpion->verif.kp_6 = 1; 
            t_morpion->player_turn = 2;
        }
        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_6 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 320, 240);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
            t_morpion->verif.kp_6 = 1;
            t_morpion->player_turn = 1;
        }
    }
    /*---MOUSE EN HAUT A GAUCHE---*/
    else if(((xmouse >= 100 && xmouse <= 195) && (ymouse >= 120 && ymouse <= 220)) && mlx_is_key_down(t_morpion->mlx, MLX_KEY_KP_ENTER))
    {
        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_7 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 120, 140);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
            t_morpion->verif.kp_7 = 1;
            t_morpion->player_turn = 2;
        }
        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_7 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 120, 140);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
            t_morpion->verif.kp_7 = 1;        
            t_morpion->player_turn = 1;
        }
    }
    /*---MOUSE EN HAUT AU MILIEU---*/
    else if(((xmouse >= 200 && xmouse <= 295) && (ymouse >= 120 && ymouse <= 220)) && mlx_is_key_down(t_morpion->mlx, MLX_KEY_KP_ENTER))
    {
        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_8 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 220, 140);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
            t_morpion->verif.kp_8 = 1;        
            t_morpion->player_turn = 2;
        }
        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_8 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 220, 140);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
            t_morpion->verif.kp_8 = 1;        
            t_morpion->player_turn = 1;
        }
    }
    /*---MOUSE EN HAUT A DROITE---*/
    else if(((xmouse >= 300 && xmouse <= 395) && (ymouse >= 120 && ymouse <= 220)) && mlx_is_key_down(t_morpion->mlx, MLX_KEY_KP_ENTER))
    {
        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_9 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 320, 140);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
            t_morpion->verif.kp_9 = 1;       
            t_morpion->player_turn = 2;
        }
        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_9 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 320, 140);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
            t_morpion->verif.kp_9 = 1;
            t_morpion->player_turn = 1;
        }
    }
}

void    key_press(mlx_key_data_t keydata ,t_morpion *t_morpion)
{
    if(keydata.key == MLX_KEY_ESCAPE && keydata.action == MLX_RELEASE)
        mlx_close_window(t_morpion->mlx);
    else if(keydata.key == MLX_KEY_KP_1 && keydata.action == MLX_RELEASE)
    {
        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_1 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 120, 340);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
            t_morpion->verif.kp_1 = 1;
            t_morpion->player_turn = 2;
        }
        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_1 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 120, 340);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
            t_morpion->verif.kp_1 = 1;
            t_morpion->player_turn = 1;
        }
    }
    else if(keydata.key == MLX_KEY_KP_2 && keydata.action == MLX_RELEASE)
    {
        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_2 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 220, 340);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
            t_morpion->verif.kp_2 = 1;
            t_morpion->player_turn = 2;
        }
        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_2 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 220, 340);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
            t_morpion->verif.kp_2 = 1;
            t_morpion->player_turn = 1;
        }
    }
    else if(keydata.key == MLX_KEY_KP_3 && keydata.action == MLX_RELEASE)
    {
        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_3 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 320, 340);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
            t_morpion->verif.kp_3 = 1;
            t_morpion->player_turn = 2;
        }
        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_3 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 320, 340);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
            t_morpion->verif.kp_3 = 1;
            t_morpion->player_turn = 1;
        }
    }
    else if(keydata.key == MLX_KEY_KP_4 && keydata.action == MLX_RELEASE)
    {
        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_4 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 120, 240);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
            t_morpion->verif.kp_4 = 1;
            t_morpion->player_turn = 2;
        }
        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_4 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 120, 240);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
            t_morpion->verif.kp_4 = 1;  
            t_morpion->player_turn = 1;
        }
    }
    else if(keydata.key == MLX_KEY_KP_5 && keydata.action == MLX_RELEASE)
    {
        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_5 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 220, 240);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
            t_morpion->verif.kp_5 = 1;    
            t_morpion->player_turn = 2;
        }
        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_5 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 220, 240);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
            t_morpion->verif.kp_5 = 1; 
            t_morpion->player_turn = 1;
        }
    }
    else if(keydata.key == MLX_KEY_KP_6 && keydata.action == MLX_RELEASE)
    {
        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_6 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 320, 240);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
            t_morpion->verif.kp_6 = 1; 
            t_morpion->player_turn = 2;
        }
        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_6 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 320, 240);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
            t_morpion->verif.kp_6 = 1;
            t_morpion->player_turn = 1;
        }
    }
    else if(keydata.key == MLX_KEY_KP_7 && keydata.action == MLX_RELEASE)
    {
        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_7 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 120, 140);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
            t_morpion->verif.kp_7 = 1;
            t_morpion->player_turn = 2;
        }
        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_7 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 120, 140);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
            t_morpion->verif.kp_7 = 1;        
            t_morpion->player_turn = 1;
        }
    }
    else if(keydata.key == MLX_KEY_KP_8 && keydata.action == MLX_RELEASE)
    {
        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_8 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 220, 140);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
            t_morpion->verif.kp_8 = 1;        
            t_morpion->player_turn = 2;
        }
        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_8 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 220, 140);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
            t_morpion->verif.kp_8 = 1;        
            t_morpion->player_turn = 1;
        }
    }
    else if(keydata.key == MLX_KEY_KP_9 && keydata.action == MLX_RELEASE)
    {
        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_9 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 320, 140);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
            t_morpion->verif.kp_9 = 1;       
            t_morpion->player_turn = 2;
        }
        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_9 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 320, 140);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
            t_morpion->verif.kp_9 = 1;
            t_morpion->player_turn = 1;
        }
    }
}



void display_fond(t_morpion *t_morpion)
{
    mlx_image_to_window(t_morpion->mlx, t_morpion->img.fond_morpion, 0, 0);
    mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);

}