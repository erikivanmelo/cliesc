#ifndef CLIESC_H
#define CLIESC_H

#include <stdio.h>

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

#endif