/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
static const float menu_height_ratio = 4.0f;  /* This is the ratio used in the original calculation */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Hack:size=13"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

/* set the color theme by pywal16 */
#include "/home/alemusu/.cache/wal/colors-wal-dmenu.h"

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 15;
static unsigned int columns    = 1;
static unsigned int maxhist    = 64;
static int histnodup           = 1;	/* if 0, record repeated histories */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 2;
