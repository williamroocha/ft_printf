/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:34:39 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/27 19:47:00 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putstr(char *str, long int *chr_total)
{
	int	i;

	i = -1;
	if (!str)
	{
		ft_putstr("(null)", chr_total);
		return ;
	}
	while (str[++i])
		ft_putchar(str[i], chr_total);
}
