#ifndef CLIESC_H
#define CLIESC_H

#include <stdio.h>

/* ATTR MACROS */


#define A_BOLD 			1 /* Turn on the bold or increased intensity */
#define A_UNDERLINE 	2 /* Turn on the underline */
#define A_DUNDERLINE 	4 /* Turn on the double underline */
#define A_BLINK 		8 /* Turn on the blinking */
#define A_RBLINK 		16 /* Turn on the rapid blinking [not widely supported] */
#define A_ITALIC 		32 /* Turn on the italic (Sometimes treated as inverse or blink) [not widely supported] */
#define A_REVERS 		64 /* Swaps foreground and background colors, */
#define A_STRIKE 		128 /* Turn on the strike through */
#define A_INVISIBLE 	256 /* Make the text invisible */


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

/* Resets the font attribute */
#define attrreset()	printf("\033[22m\033[24m\033[25m\033[23m\033[27m\033[29m\033[28m")

/* Turn on font attributes */
void attr(int attr){
	if (attr & A_BOLD 		) printf("\033[1m");
	if (attr & A_UNDERLINE 	) printf("\033[4m");
	if (attr & A_DUNDERLINE ) printf("\033[21m");
	if (attr & A_BLINK 		) printf("\033[5m");
	if (attr & A_RBLINK 	) printf("\033[6m");
	if (attr & A_ITALIC 	) printf("\033[3m");
	if (attr & A_REVERS 	) printf("\033[7m");
	if (attr & A_STRIKE 	) printf("\033[9m");
	if (attr & A_INV3ISIBLE ) printf("\033[8m");
}

/* Turn off font attributes */
void attroff(int attr){
	if (attr & A_BOLD 		) printf("\033[22m");
	if (attr & A_UNDERLINE 	) printf("\033[24m");
	if (attr & A_BLINK 		) printf("\033[25m");
	if (attr & A_ITALIC 	) printf("\033[23m");
	if (attr & A_REVERS 	) printf("\033[27m");
	if (attr & A_STRIKE 	) printf("\033[29m");
	if (attr & A_INVISIBLE 	) printf("\033[28m");
}


#endif