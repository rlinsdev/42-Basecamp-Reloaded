/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:57:14 by rlins             #+#    #+#             */
/*   Updated: 2022/03/25 20:25:30 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.c"
#include <stdio.h>

int main(void)
{
	int	a;
	int	b;

	int *ptra;
	int *ptrb;

	a = 1;
	b = 2;

	ptra = &a;
	ptrb = &b;

	printf("Sem alteração:\n a: %d\n b: %d\n", *ptra, *ptrb);
	ft_swap(ptra, ptrb);
	printf("Com alteração:\n a: %d\n b: %d\n", *ptra, *ptrb);
	

}
