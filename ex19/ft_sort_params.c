/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 23:21:10 by rlins             #+#    #+#             */
/*   Updated: 2022/03/29 03:27:22 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	main(int argc, char *argv[])
{
	int	qty;
	int	i;
	int	j;
	int	arg[argc];

	qty = 1;
	i = 1;
	while (qty < argc)
	{
		arg[qty] = qty;
		qty++;
	}
	while (i < argc)
	{
		j = i;
		while (j < argc)
		{
			if (ft_strcmp(argv[arg[i]], argv[arg[j]]) > 0)
				ft_swap(&arg[i], &arg[j]);
			j++;
		}
		ft_putchar(argv[arg[i++]]);
	}
	return (0);
}
