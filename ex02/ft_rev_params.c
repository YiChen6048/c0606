/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ctan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 20:44:16 by yi-ctan           #+#    #+#             */
/*   Updated: 2025/03/18 17:37:45 by yi-ctan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int main(int argc, char **argv)
{
	for (int i = argc - 1; i > 0; i--)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
	}
	return (0);
}
