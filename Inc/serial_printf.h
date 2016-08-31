/*
 * serial_printf.h
 *
 *  Created on: Aug 30, 2016
 *      Author: Francis
 */

#ifndef SERIAL_PRINTF_H_
#define SERIAL_PRINTF_H_

#include <stdio.h>

#define HAL_DO_OR_DIE(fun)	if (HAL_OK != fun) error_handler();
#ifdef __GNUC__
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif /* __GNUC__ */

#define ANSI_COLOR_RED		"\x1b[31m"
#define ANSI_COLOR_GREEN	"\x1b[32m"
#define ANSI_COLOR_YELLOW 	"\x1b[33m"
#define ANSI_COLOR_BLUE		"\x1b[34m"
#define ANSI_COLOR_MAGENTA	"\x1b[35m"
#define ANSI_COLOR_CYAN		"\x1b[36m"
#define ANSI_COLOR_RESET	"\x1b[0m"
#define ANSI_COLOR_ERROR	"\x1b[93;41m"

#endif /* SERIAL_PRINTF_H_ */
