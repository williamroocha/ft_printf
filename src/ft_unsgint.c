/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsgint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:04:36 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/27 19:47:06 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_unsgint(unsigned int nbr, long int *chr_total)
{
	if (nbr > 9)
	{
		ft_unsgint(nbr / 10, chr_total);
		ft_unsgint(nbr % 10, chr_total);
	}
	else
		ft_putchar(nbr + '0', chr_total);
}
