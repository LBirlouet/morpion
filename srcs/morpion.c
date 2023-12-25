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
    /*---MOUSE EN BAS A GAUCHE---*/
    if(((xmouse >= 100 && xmouse <= 195) && (ymouse >= 325 && ymouse <= 420)) && (mlx_is_key_down(t_morpion->mlx, MLX_KEY_KP_ENTER) || mlx_is_mouse_down(t_morpion->mlx, MLX_MOUSE_BUTTON_LEFT )))
    {
        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_1 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 120, 340);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
            t_morpion->map[2][0] = 'X';
            t_morpion->verif.kp_1 = 1;
            t_morpion->player_turn = 2;
        }
        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_1 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 120, 340);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
            t_morpion->map[2][0] = 'O';
            t_morpion->verif.kp_1 = 1;
            t_morpion->player_turn = 1;
        }
    }
    /*---MOUSE EN BAS AU MILIEU---*/
    else if(((xmouse >= 200 && xmouse <= 295) && (ymouse >= 325 && ymouse <= 420)) && (mlx_is_key_down(t_morpion->mlx, MLX_KEY_KP_ENTER) || mlx_is_mouse_down(t_morpion->mlx, MLX_MOUSE_BUTTON_LEFT )))
    {
        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_2 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 225, 340);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
            t_morpion->map[2][1] = 'X';
            t_morpion->verif.kp_2 = 1;
            t_morpion->player_turn = 2;
        }
        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_2 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 225, 340);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
            t_morpion->map[2][1] = 'O';
            t_morpion->verif.kp_2 = 1;
            t_morpion->player_turn = 1;
        }
    }
    /*---MOUSE EN BAS A DROITE---*/
    else if(((xmouse >= 300 && xmouse <= 395) && (ymouse >= 325 && ymouse <= 420)) && (mlx_is_key_down(t_morpion->mlx, MLX_KEY_KP_ENTER) || mlx_is_mouse_down(t_morpion->mlx, MLX_MOUSE_BUTTON_LEFT )))
    {
        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_3 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 320, 340);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
            t_morpion->map[2][2] = 'X';
            t_morpion->verif.kp_3 = 1;
            t_morpion->player_turn = 2;
        }
        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_3 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 320, 340);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
            t_morpion->map[2][2] = 'O';
            t_morpion->verif.kp_3 = 1;
            t_morpion->player_turn = 1;
        }
    }
    /*---MOUSE AU MILIEU A GAUCHE---*/
    else if(((xmouse >= 100 && xmouse <= 195) && (ymouse >= 220 && ymouse <= 320)) && (mlx_is_key_down(t_morpion->mlx, MLX_KEY_KP_ENTER) || mlx_is_mouse_down(t_morpion->mlx, MLX_MOUSE_BUTTON_LEFT )))
    {
        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_4 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 120, 240);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
            t_morpion->map[1][0] = 'X';
            t_morpion->verif.kp_4 = 1;
            t_morpion->player_turn = 2;
        }
        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_4 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 120, 240);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
            t_morpion->map[1][0] = 'O';
            t_morpion->verif.kp_4 = 1;  
            t_morpion->player_turn = 1;
        }
    }
    /*---MOUSE AU MILIEU AU MILIEU---*/
    else if(((xmouse >= 200 && xmouse <= 295) && (ymouse >= 220 && ymouse <= 320)) && (mlx_is_key_down(t_morpion->mlx, MLX_KEY_KP_ENTER) || mlx_is_mouse_down(t_morpion->mlx, MLX_MOUSE_BUTTON_LEFT )))
    {
        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_5 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 225, 240);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
            t_morpion->map[1][1] = 'X';
            t_morpion->verif.kp_5 = 1;    
            t_morpion->player_turn = 2;
        }
        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_5 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 225, 240);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
            t_morpion->map[1][1] = 'O';
            t_morpion->verif.kp_5 = 1; 
            t_morpion->player_turn = 1;
        }
    }
    /*---MOUSE AU MILIEU AU DROITE---*/
    else if(((xmouse >= 300 && xmouse <= 395) && (ymouse >= 220 && ymouse <= 320)) && (mlx_is_key_down(t_morpion->mlx, MLX_KEY_KP_ENTER) || mlx_is_mouse_down(t_morpion->mlx, MLX_MOUSE_BUTTON_LEFT )))
    {
        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_6 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 320, 240);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
            t_morpion->map[1][2] = 'X';
            t_morpion->verif.kp_6 = 1; 
            t_morpion->player_turn = 2;
        }
        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_6 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 320, 240);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
            t_morpion->map[1][2] = 'O';
            t_morpion->verif.kp_6 = 1;
            t_morpion->player_turn = 1;
        }
    }
    /*---MOUSE EN HAUT A GAUCHE---*/
    else if(((xmouse >= 100 && xmouse <= 195) && (ymouse >= 120 && ymouse <= 220)) && (mlx_is_key_down(t_morpion->mlx, MLX_KEY_KP_ENTER) || mlx_is_mouse_down(t_morpion->mlx, MLX_MOUSE_BUTTON_LEFT )))
    {
        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_7 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 120, 140);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
            t_morpion->map[0][0] = 'X';            
            t_morpion->verif.kp_7 = 1;
            t_morpion->player_turn = 2;
        }
        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_7 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 120, 140);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
            t_morpion->map[0][0] = 'O';
            t_morpion->verif.kp_7 = 1;        
            t_morpion->player_turn = 1;
        }
    }
    /*---MOUSE EN HAUT AU MILIEU---*/
    else if(((xmouse >= 200 && xmouse <= 295) && (ymouse >= 120 && ymouse <= 220)) && (mlx_is_key_down(t_morpion->mlx, MLX_KEY_KP_ENTER) || mlx_is_mouse_down(t_morpion->mlx, MLX_MOUSE_BUTTON_LEFT )))
    {
        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_8 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 225, 140);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
            t_morpion->map[0][1] = 'X';            
            t_morpion->verif.kp_8 = 1;        
            t_morpion->player_turn = 2;
        }
        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_8 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 225, 140);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
            t_morpion->map[0][1] = 'O';            
            t_morpion->verif.kp_8 = 1;        
            t_morpion->player_turn = 1;
        }
    }
    /*---MOUSE EN HAUT A DROITE---*/
    else if(((xmouse >= 300 && xmouse <= 395) && (ymouse >= 120 && ymouse <= 220)) && (mlx_is_key_down(t_morpion->mlx, MLX_KEY_KP_ENTER) || mlx_is_mouse_down(t_morpion->mlx, MLX_MOUSE_BUTTON_LEFT )))
    {
        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_9 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 320, 140);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
            t_morpion->map[0][2] = 'X';            
            t_morpion->verif.kp_9 = 1;       
            t_morpion->player_turn = 2;
        }
        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_9 == 0)
        {
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 320, 140);
            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
            t_morpion->map[0][2] = 'O';           
            t_morpion->verif.kp_9 = 1;
            t_morpion->player_turn = 1;
        }
    }
}

void    key_press(mlx_key_data_t keydata ,t_morpion *t_morpion)
{
    if(keydata.key == MLX_KEY_ESCAPE && keydata.action == MLX_RELEASE)
        mlx_close_window(t_morpion->mlx);
    if (t_morpion->win == 0)
    {
	    if(keydata.key == MLX_KEY_KP_1 && keydata.action == MLX_RELEASE)
	    {
	        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_1 == 0)
	        {
	            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 120, 340);
	            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
	            t_morpion->map[2][0] = 'X';
	            t_morpion->verif.kp_1 = 1;
	            t_morpion->player_turn = 2;
	        }
	        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_1 == 0)
	        {
	            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 120, 340);
	            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
	            t_morpion->map[2][0] = 'O';
	            t_morpion->verif.kp_1 = 1;
	            t_morpion->player_turn = 1;
	        }
	    }
	    else if(keydata.key == MLX_KEY_KP_2 && keydata.action == MLX_RELEASE)
	    {
	        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_2 == 0)
	        {
	            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 225, 340);
	            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
	            t_morpion->map[2][1] = 'X';
	            t_morpion->verif.kp_2 = 1;
	            t_morpion->player_turn = 2;
	        }
	        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_2 == 0)
	        {
	            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 225, 340);
	            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
	            t_morpion->map[2][1] = 'O';
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
	            t_morpion->map[2][2] = 'X';
	            t_morpion->verif.kp_3 = 1;
	            t_morpion->player_turn = 2;
	        }
	        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_3 == 0)
	        {
	            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 320, 340);
	            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
	            t_morpion->map[2][2] = 'O';
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
	            t_morpion->map[1][0] = 'X';
	            t_morpion->verif.kp_4 = 1;
	            t_morpion->player_turn = 2;
	        }
	        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_4 == 0)
	        {
	            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 120, 240);
	            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
	            t_morpion->map[1][0] = 'O';
	            t_morpion->verif.kp_4 = 1;  
	            t_morpion->player_turn = 1;
	        }
	    }
	    else if(keydata.key == MLX_KEY_KP_5 && keydata.action == MLX_RELEASE)
	    {
	        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_5 == 0)
	        {
	            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 225, 240);
	            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
	            t_morpion->map[1][1] = 'X';
	            t_morpion->verif.kp_5 = 1;    
	            t_morpion->player_turn = 2;
	        }
        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_5 == 0)
        {
	            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 225, 240);
	            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
	            t_morpion->map[1][1] = 'O';
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
	            t_morpion->map[1][2] = 'X';
	            t_morpion->verif.kp_6 = 1; 
	            t_morpion->player_turn = 2;
	        }
	        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_6 == 0)
	        {
	            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 320, 240);
	            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
	            t_morpion->map[1][2] = 'O';
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
	            t_morpion->map[0][0] = 'X';
	            t_morpion->verif.kp_7 = 1;
	            t_morpion->player_turn = 2;
	        }
	        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_7 == 0)
	        {
	            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 120, 140);
	            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
	            t_morpion->map[0][0] = 'O';
	            t_morpion->verif.kp_7 = 1;        
	            t_morpion->player_turn = 1;
	        }
	    }
	    else if(keydata.key == MLX_KEY_KP_8 && keydata.action == MLX_RELEASE)
	    {
	        if (t_morpion->player_turn == 1 && t_morpion->verif.kp_8 == 0)
	        {
	            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_cross_morpion, 225, 140);
	            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_2_turn_morpion, 0, 0);
	            t_morpion->map[0][1] = 'X';
	            t_morpion->verif.kp_8 = 1;        
	            t_morpion->player_turn = 2;
	        }
	        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_8 == 0)
	        {
	            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 225, 140);
	            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
	            t_morpion->map[0][1] = 'O';
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
	            t_morpion->map[0][2] = 'X';
	            t_morpion->verif.kp_9 = 1;       
	            t_morpion->player_turn = 2;
	        }
	        else if (t_morpion->player_turn == 2 && t_morpion->verif.kp_9 == 0)
	        {
	            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_round_morpion, 320, 140);
	            mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);
	            t_morpion->map[0][2] = 'O';
	            t_morpion->verif.kp_9 = 1;
	            t_morpion->player_turn = 1;
	        }
        }
    }
    /*ajt une verif si la game est win mais du coup => créer char **map*/
    /*du coup remplir la map quand une case est remplie*/
    /*(8 * 2) possibilité de win (1er ligne / 2e ligne / 3e ligne / 1er coll / 2e coll / 3e coll / 1er diag / 2e diag)*/
 
    int ver_win = verif_win(t_morpion);
    if (ver_win == 1 ||ver_win == 2)
    {
        printf("wiwiin\n");
        /*c win pour un des 2*/
    }

    /*fin du jeu tout case sont remplies*/
    if (t_morpion->verif.kp_1 == 1 && t_morpion->verif.kp_2 == 1 && t_morpion->verif.kp_3 == 1 && t_morpion->verif.kp_4 == 1 && t_morpion->verif.kp_5 == 1 && t_morpion->verif.kp_6 == 1 && t_morpion->verif.kp_7 == 1 && t_morpion->verif.kp_8 == 1 && t_morpion->verif.kp_9 == 1)
    {
        t_morpion->all_filled = 1;
        mlx_image_to_window(t_morpion->mlx, t_morpion->img.fond_all_filled , 0, 0);
        /*systeme de choisir entre escape pour leave oui appuyer sur restart pour recommencer*/
        printf("tout rempli\n");
    }
}


int verif_win(t_morpion *t_morpion)
{
    /*verif ligne 1 player 1 (X)*/
    if (t_morpion->map[0][0] == 'X' && t_morpion->map[0][1] == 'X' && t_morpion->map[0][2] == 'X')
    {
        mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_win_p_1_1, 0, 0);
        t_morpion->win = 1;
        return (1);
    }
    /*verif ligne 1 player 2 (O)*/
    else if (t_morpion->map[0][0] == 'O' && t_morpion->map[0][1] == 'O' && t_morpion->map[0][2] == 'O')
    {
        mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_win_p_2_1, 0, 0);
        t_morpion->win = 1;
	    return (1);
	}

    /*verif ligne 2 player 1 (X)*/
    if (t_morpion->map[1][0] == 'X' && t_morpion->map[1][1] == 'X' && t_morpion->map[1][2] == 'X')
    {
        mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_win_p_1_2, 0, 0);
        t_morpion->win = 1;
        return (1);
    }
    /*verif ligne 2 player 2 (O)*/
    else if (t_morpion->map[1][0] == 'O' && t_morpion->map[1][1] == 'O' && t_morpion->map[1][2] == 'O')
    {
        mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_win_p_2_2, 0, 0);
        t_morpion->win = 1;
	    return (1);
	}

    /*verif ligne 3 player 1 (X)*/
    if (t_morpion->map[2][0] == 'X' && t_morpion->map[2][1] == 'X' && t_morpion->map[2][2] == 'X')
    {
        mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_win_p_1_3, 0, 0);
        t_morpion->win = 1;
        return (1);
    }
    /*verif ligne 3 player 2 (O)*/
    else if (t_morpion->map[2][0] == 'O' && t_morpion->map[2][1] == 'O' && t_morpion->map[2][2] == 'O')
    {
        mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_win_p_2_3, 0, 0);
        t_morpion->win = 1;
	    return (1);
	}

    /*verif coll 1 player 1 (X)*/
    if (t_morpion->map[0][0] == 'X' && t_morpion->map[1][0] == 'X' && t_morpion->map[2][0] == 'X')
    {
        mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_win_p_1_4, 0, 0);
        t_morpion->win = 1;
        return (1);
    }
    /*verif coll 1 player 2 (O)*/
    else if (t_morpion->map[0][0] == 'O' && t_morpion->map[1][0] == 'O' && t_morpion->map[2][0] == 'O')
    {
        mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_win_p_2_4, 0, 0);
        t_morpion->win = 1;
	    return (1);
	}

    /*verif coll 2 player 1 (X)*/
    if (t_morpion->map[0][1] == 'X' && t_morpion->map[1][1] == 'X' && t_morpion->map[2][1] == 'X')
    {
        mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_win_p_1_5, 0, 0);
        t_morpion->win = 1;
        return (1);
    }
    /*verif coll 2 player 2 (O)*/
    else if (t_morpion->map[0][1] == 'O' && t_morpion->map[1][0] == 'O' && t_morpion->map[2][1] == 'O')
    {
        mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_win_p_2_5, 0, 0);
        t_morpion->win = 1;
	    return (1);
	}

    /*verif coll 3 player 1 (X)*/
    if (t_morpion->map[0][2] == 'X' && t_morpion->map[1][2] == 'X' && t_morpion->map[2][2] == 'X')
    {
        mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_win_p_1_6, 0, 0);
        t_morpion->win = 1;
        return (1);
    }
    /*verif coll 3 player 2 (O)*/
    else if (t_morpion->map[0][2] == 'O' && t_morpion->map[1][2] == 'O' && t_morpion->map[2][2] == 'O')
    {
        mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_win_p_2_6, 0, 0);
        t_morpion->win = 1;
	    return (1);
	}

	/*verif diag 1 player 1 (X)*/
    if (t_morpion->map[2][0] == 'X' && t_morpion->map[1][1] == 'X' && t_morpion->map[0][2] == 'X')
    {
        mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_win_p_1_7, 0, 0);
        t_morpion->win = 1;
        return (1);
    }
    /*verif diag 1 player 2 (O)*/
    else if (t_morpion->map[2][0] == 'O' && t_morpion->map[1][1] == 'O' && t_morpion->map[0][2] == 'O')
    {
        mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_win_p_2_7, 0, 0);
        t_morpion->win = 1;
	    return (1);
	}

	/*verif diag 2 player 1 (X)*/
    if (t_morpion->map[0][0] == 'X' && t_morpion->map[1][1] == 'X' && t_morpion->map[2][2] == 'X')
    {
        mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_win_p_1_8, 0, 0);
        t_morpion->win = 1;
        return (1);
    }
    /*verif diag 2 player 2 (O)*/
    else if (t_morpion->map[0][0] == 'O' && t_morpion->map[1][1] == 'O' && t_morpion->map[2][2] == 'O')
    {
        mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_win_p_2_8, 0, 0);
        t_morpion->win = 1;
	    return (1);
	}

}


void display_fond(t_morpion *t_morpion)
{
    mlx_image_to_window(t_morpion->mlx, t_morpion->img.fond_morpion, 0, 0);
    mlx_image_to_window(t_morpion->mlx, t_morpion->img.img_player_1_turn_morpion, 0, 0);

}