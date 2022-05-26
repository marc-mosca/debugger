/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 22:07:22 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/26 15:24:05 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define debug printDebug(__FILE__, __LINE__, "Wow! It's a default debug message.")
#define vdebug(x) printDebug(__FILE__, __LINE__, x)

#define END "\033[0m"
#define PURPLE "\033[1;35m"

template<typename T>
void	printDebug(std::string file, int32_t line, T x) {
	std::cout << PURPLE << file << ":" << line << END << " " << x << std::endl;
}
