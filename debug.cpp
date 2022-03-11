/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 22:07:22 by mmosca            #+#    #+#             */
/*   Updated: 2022/03/11 22:10:55 by mmosca           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <iostream>

#define debug print_debug_str("This is a debug message!", __FILE__, __LINE__)
#define sdebug(x) print_debug_str(x, __FILE__, __LINE__)
#define idebug(x) print_debug_int(x, __FILE__, __LINE__)

void    print_debug_str(std::string x, std::string file, int32_t line) {
    std::cout << "\033[1;35m" << file << ":" << line << "\033[0m " << x << std::endl;
}

void    print_debug_int(int32_t x, std::string file, int32_t line) {
    std::cout << "\033[1;35m" << file << ":" << line << "\033[0m " << x << std::endl;
}
