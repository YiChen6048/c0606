/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ctan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:03:52 by yi-ctan           #+#    #+#             */
/*   Updated: 2025/03/18 19:28:19 by yi-ctan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void ft_sort_params(char **argv, int argc)
{
	int i, j, min;
	char *temp;

	for (i = 1; i < argc - 1; i++)
	{
		min = i;
		for (j = i + 1; j < argc; j++)
		{
			if (ft_strcmp(argv[j], argv[min]) < 0)
				min = j;
		}
		if (min != i)
		{
			temp = argv[i];
			argv[i] = argv[min];
			argv[min] = temp;
		}
	}
}

int main(int argc, char **argv)
{
	int i;

	if (argc > 1)
	{
		ft_sort_params(argv, argc);
		for (i = 1; i < argc; i++)
		{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
		}
	}
	return (0);
}
