/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 21:44:58 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/12 05:11:56 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

#include <stdio.h>
int main(void)
{
	int a = 13;
	int b = 42;
	ft_swap(&a, &b);
	printf("New A:%d\nNew B:%d", a, b);
}

//Burada ise oluşturduğumuz iki değerin yerlerini değiştiriyoruz.
//Birazıcık matematik ile yapılan işlemi anlayabilirsiniz.d
//Kolay gelsin sözelciler efdklnfgdnfdfd
