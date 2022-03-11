/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 22:02:23 by mmosca            #+#    #+#             */
/*   Updated: 2022/03/11 22:10:51 by mmosca           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdint.h>

#define debug ft_sdebug("This is a debug message.", __FILE__, __LINE__)
#define sdebug(x) ft_sdebug(x, __FILE__, __LINE__)
#define idebug(x) ft_idebug(x, __FILE__, __LINE__)

void	ft_sdebug(char *x, char *file, int32_t line)
{
	dprintf(2, "\033[1;35m%s:%d\033[0m %s\n", file, line, x);
}

void	ft_idebug(int32_t x, char *file, int32_t line)
{
	dprintf(2, "\033[1;35m%s:%d\033[0m %d\n", file, line, x);
}
