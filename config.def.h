/*
 * Background color, X11 color name (see: https://en.wikipedia.org/wiki/X11_color_names).
 */
static const char *bg_color = "Gray50";

/*
 * Parameters are: mask, keysym, action.
 * Mask can be any mask from XKeyEvent.state (see: man XKeyEvent) or
 * AnyMask (mask is ignored), or EmptyMask (empty mask, no key modifiers).
 * Keysym can be any keysym from /usr/include/X11/keysymdef.h.
 */
static Shortcut shortcuts[] = {
	{AnyMask,     XK_q,         QUIT},
	{EmptyMask,   XK_Escape,    QUIT},
	{ControlMask, XK_Page_Down, NEXT},
	{ControlMask, XK_Page_Up,   PREV},
	{ControlMask, XK_Home,      FIRST},
	{ControlMask, XK_End,       LAST},
	{EmptyMask,   XK_z,         FIT_PAGE},
	{EmptyMask,   XK_w,         FIT_WIDTH}
};