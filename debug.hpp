/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:32:05 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/26 15:33:19 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEBUG_HPP
# define DEBUG_HPP

# include <iostream>

# define debug printDebug(__FILE__, __LINE__, "Wow! It's a default debug message.")
# define vdebug(x) printDebug(__FILE__, __LINE__, x)

template<typename T>
void	printDebug(std::string file, int32_t line, T x) {
	std::cout << "\033[1;35m" << file << ":" << line << "\033[0m" << " " << x << std::endl;
}

#endif
