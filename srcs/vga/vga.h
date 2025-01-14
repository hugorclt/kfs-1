#pragma once

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define	VGA_MAX_X	80
#define	VGA_MAX_Y	25

/* Hardware text mode color constants. */
enum vga_color {
	VGA_COLOR_BLACK = 0,
	VGA_COLOR_BLUE = 1,
	VGA_COLOR_GREEN = 2,
	VGA_COLOR_CYAN = 3,
	VGA_COLOR_RED = 4,
	VGA_COLOR_MAGENTA = 5,
	VGA_COLOR_BROWN = 6,
	VGA_COLOR_LIGHT_GREY = 7,
	VGA_COLOR_DARK_GREY = 8,
	VGA_COLOR_LIGHT_BLUE = 9,
	VGA_COLOR_LIGHT_GREEN = 10,
	VGA_COLOR_LIGHT_CYAN = 11,
	VGA_COLOR_LIGHT_RED = 12,
	VGA_COLOR_LIGHT_MAGENTA = 13,
	VGA_COLOR_LIGHT_BROWN = 14,
	VGA_COLOR_WHITE = 15,
};

void	vga_set_bg_color(enum vga_color color);
void	vga_set_fg_color(enum vga_color color);
void	vga_putnbr_hex(uint32_t n);
void	vga_clear_buffer();
void	vga_write_buffer(unsigned char uc);
void	vga_write_buffer_str(const char *str);
void	vga_erase_last_char();
void	vga_erase_last_char_unprotected();
