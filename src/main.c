/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:59:34 by fvoicu            #+#    #+#             */
/*   Updated: 2024/05/30 23:37:42 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "miniRT.h"



int main(void) {
	t_mini_rt	*mini_rt;

	mini_rt = init_mini_rt(WIDTH, HEIGHT);
	if(!mini_rt)
		return (fprintf(stderr, "Failed to init miniRT\n"), \
				EXIT_FAILURE);
	render_scene(mini_rt);
	mlx_loop(mini_rt->window->mlx);

	destroy_mini_rt(mini_rt);
	return EXIT_SUCCESS;
}
