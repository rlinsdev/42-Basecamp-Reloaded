/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 18:55:18 by rlins             #+#    #+#             */
/*   Updated: 2022/03/26 19:26:49 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_recursive_factorial.c"
#include <stdio.h>

int	main(void)
{
	int	result;
	result = ft_recursive_factorial(5);
	printf("Result:%d\n", result);
	return(0);
}