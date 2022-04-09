/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 21:49:07 by rlins             #+#    #+#             */
/*   Updated: 2022/03/26 18:42:14 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_iterative_factorial.c"
#include <stdio.h>

int main(void)
{
	int result;
	result = ft_iterative_factorial(4);
	printf("Result: %d\n", result);
	return (0);
}
