/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 21:49:11 by rlins             #+#    #+#             */
/*   Updated: 2022/03/26 18:42:07 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	aux;

	aux = nb;
	while (nb > 1)
	{
		aux = aux * (nb - 1);
		nb--;
	}
	return (aux);
}
