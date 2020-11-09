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

Font functions
======

<code>freset()</code>
Reset the font attribute

<code>fbold()</code>
Turn on the bold or increased intensity

<code>ffaint()</code>
Turn on the faint or decreased intensity

<code>fitalic()</code>
Turn on the italic (Sometimes treated as inverse or blink) [not widely supported]

<code>funderline()</code>
Turn on the underline

<code>fblink()</code>
Turn on the blinking

<code>frblink()</code>
Turn on the rapid blinking [not widely supported]

<code>frevers()</code>
Swaps foreground and background colors,

<code>fhide()</code>
Hides text

<code>fstrike()</code>
Turn on the strike through

<code>fdunderline()</code>
Turn on the double underline

<code>fboldoff()</code>
Turn off the bold

<code>fitalicoff()</code>
Turn off the italic

<code>funderlineoff()</code>
Turn off the underline

<code>fblinkoff()</code>
Turn off the blinking

<code>freversoff()</code>
Turn off the revers text

<code>fshow()</code>
Shows the text

<code>fsrikeoff()</code>
Turn off the strike through
