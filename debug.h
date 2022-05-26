/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:28:37 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/26 15:29:54 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEBUG_H
# define DEBUG_H

# include <stdio.h>

# define debug() dprintf(2, "\033[1;35m%s:%d\033[0m %s\n", __FILE__, __LINE__, "This is a debug message.")
# define sdebug(x) dprintf(2, "\033[1;35m%s:%d\033[0m %s\n", __FILE__, __LINE__, x)
# define idebug(x) dprintf(2, "\033[1;35m%s:%d\033[0m %d\n", __FILE__, __LINE__, x)

#endif
