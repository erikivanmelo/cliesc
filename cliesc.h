#ifndef CLIESC_H
#define CLIESC_H

#include <stdio.h>

/* CURSOR FUNCTIONS */

/* Moves the cursor n up */
#define cup(n)		 printf("\033[%iA",n);

/* Moves the cursor n down */
#define cdown(n)	 printf("\033[%iB",n);

/* Moves the cursor n to the right */
#define cright(n)	 printf("\033[%iC",n);

/* Moves the cursor n to the left */
#define cleft(n)	 printf("\033[%iD",n);

/* Moves the cursor to the beginning of n lines after the current one */
#define cnextline(n) printf("\033[%iE",n);

/* Moves the cursor to the beginning of n lines before the current one */
#define cprevline(n) printf("\033[%iF",n);

/* Moves the cursor in a specific coordinate in X */
#define gotox(x)     printf("\033[%iG",x);

/* Moves the cursor in a specific coordinate in X and Y */
#define gotoxy(x,y)  printf("\033[%d;%dH",x,y);

/* Saves the actual cursor position */
#define csave()		 printf("\033[s");

/* Restore the cursor position */
#define crestore()	 printf("\033[r");

/* Show cursor */
#define cshow() 	 printf("\033[?25h");

/* Hide cursor */
#define chide()		 printf("\033[?25l");


/* FONT FUNCTIONS */

/* Reset the font attribute */
#define freset()		printf("\033[0m");

/* Turn on the bold or increased intensity */
#define fbold()			printf("\033[1m");

/* Turn on the faint or decreased intensity */
#define ffaint()		printf("\033[2m");

/* Turn on the italic (Sometimes treated as inverse or blink) [not widely supported] */
#define fitalic()		printf("\033[3m");

/* Turn on the underline */
#define funderline()	printf("\033[4m");

/* Turn on the blinking */
#define fblink()		printf("\033[5m");

/* Turn on the rapid blinking [not widely supported] */
#define frblink()		printf("\033[6m");

/* Swaps foreground and background colors, */
#define frevers()		printf("\033[7m");

/* Hides text */
#define fhide()			printf("\033[8m");

/* Turn on the strike through */
#define fstrike()		printf("\033[9m");

/* Turn on the double underline */
#define fdunderline()	printf("\033[21m");

/* Turn off the bold */
#define fboldoff()		printf("\033[22m");

/* Turn off the italic */
#define fitalicoff()	printf("\033[23m");

/* Turn off the underline */
#define funderlineoff()	printf("\033[24m");

/* Turn off the blinking */
#define fblinkoff()		printf("\033[25m");

/* Turn off the revers text */
#define freversoff()	printf("\033[27m");

/* Shows the text */
#define fshow()			printf("\033[28m");

/* Turn off the strike through */
#define fsrikeoff()		printf("\033[29m");


#endif