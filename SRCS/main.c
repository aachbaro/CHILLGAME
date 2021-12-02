/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:19:30 by aachbaro          #+#    #+#             */
/*   Updated: 2021/12/02 18:57:16 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../chillgame.h"


WINDOW	*win;

int main(void)
{
	char i;

	i = 0;
	initscr();
	noecho();
	win = newwin(0, 0, 50, 50);
	keypad(stdscr, TRUE);
	nodelay(stdscr, TRUE);
	//box(win, ACS_VLINE, ACS_HLINE);
	refresh();
	while (i != 'q')
	{
		clear();
		i = wgetch(stdscr);
		printw("\nGAME: %c\n", i);
		refresh();
		usleep(10000);
	}
	delwin(win);
	endwin();
	return (0);
}
