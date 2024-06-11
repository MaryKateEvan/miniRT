/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mevangel <mevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 14:35:19 by mevangel          #+#    #+#             */
/*   Updated: 2024/06/11 17:10:56 by mevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "miniRT.h"

int	ft_2darray_size(char **array)
{
	int	i;

	i = 0;
	while (array[i])
		i++;
	return(i);
}

bool	array_has_only_numbers(char **array)
{
	int	i;

	i = 0;
	while (array[++i]) //i'm starting checking from i=1 because the i=0 is the identifier (A, C, L)
	{
		if (ft_str_is_number(array[i]) == false)
		{
			fv_free_array(array);
			return (false);
		}
	}
	return (true);
}
