// Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/		/*Command*/		/*Update Interval*//*Update Signal*/
	{"VOL: ", "$HOME/.local/scripts/dwmblocks-volume",	0,		2},
	{"BAT: ", "$HOME/.local/scripts/dwmblocks-battery",	60,		0},
	{"", "date +'%A %d %b %H:%M'",				60,		0},
};

// sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

