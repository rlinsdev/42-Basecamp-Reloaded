/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 21:03:47 by rlins             #+#    #+#             */
/*   Updated: 2022/03/26 21:10:14 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.c"
#include <stdio.h>

int	main(void)
{
	int	result;
	result = 0;
	char *str = "teste tamteste tam"; //9
	result = ft_strlen(str);
	printf("Tamanho: %d\n", result);
}