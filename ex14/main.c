/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:39:34 by rlins             #+#    #+#             */
/*   Updated: 2022/03/26 19:57:52 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sqrt.c"
#include <stdio.h>

int	main(void)
{
	int	result;
	result = ft_sqrt(25);
	printf("Raiz quadrada: %d \n", result);
	return (0);
}
