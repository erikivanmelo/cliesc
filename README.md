# CLIESC
This is a library with a collection of functions for making terminal programs, based on escape codes.

Cursor functions
======


<code>cup(n)</code>
Moves the cursor n up

<code>cdown(n)</code>
Moves the cursor n down

<code>cright(n)</code>
Moves the cursor n to the right

<code>cleft(n)</code>
Moves the cursor n to the left

<code>cnextline(n) </code>
Moves the cursor to the beginning of n lines after the current one

<code>cprevline(n)</code>
Moves the cursor to the beginning of n lines before the current one

<code>gotox(x)</code>
Moves the cursor in a specific coordinate in X

<code>gotoxy(x,y)</code>
Moves the cursor in a specific coordinate in X and Y

<code>csave()</code>
Saves the actual cursor position

<code>crestore()</code>
Restore the cursor position

<code>cshow() </code>
Show cursor

<code>chide()</code>
Hide cursor

Attributes macros
======

<code>A_BOLD</code>
Turn on the bold or increased intensity

<code>A_UNDERLINE</code>
Turn on the underline

<code>A_DUNDERLINE</code>
Turn on the double underline

<code>A_BLINK</code>
Turn on the blinking

<code>A_RBLINK</code>
Turn on the rapid blinking [not widely supported]

<code>A_ITALIC</code>
Turn on the italic (Sometimes treated as inverse or blink) [not widely supported]

<code>A_REVERS</code>
Swaps foreground and background colors,

<code>A_STRIKE</code>
Turn on the strike through

<code>A_INVISIBLE</code>
Make the text invisible

Attributes functions
======

<code>attrreset()</code>
Resets the font attribute

<code>void attr(int attr)</code>
Turn on font attributes

<code>void attroff(int attr)</code>
Turn on font attributes