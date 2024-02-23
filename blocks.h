//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"blk_volume",						0,									10},
	{"",	"blk_battery",					5,									2},
	{"",	"blk_disk",							10,									14},
	{"",	"blk_clock",						30,									1},
	/*{"",	"blk_tasks",	10,	26}, */
	/*{"",	"blk_pacpackages",	0,	8}, */
	/*{"",	"blk_news",		0,	6}, */
	/*{"",	"blk_torrent",	20,	7}, */
	/*{"",	"blk_doppler",	0,	13}, */
	/*{"",	"blk_forecast",	18000,	5}, */
	/*{"",	"blk_mailbox",	180,	12}, */
	/*{"",	"blk_nettraf",	1,	16}, */
	/*{"",	"blk_internet",	5,	4}, */
	/*{"",	"blk_help-icon",	0,	15}, */
	/* {"", "blk_kbselect", 0, 30}, */
	/* {"",	"blk_music",	0,	11}, */
	/* {"",	"blk_price xmr Monero 🔒 24",			9000,	24}, */
	/* {"",	"blk_price eth Ethereum 🍸 23",	9000,	23}, */
	/* {"",	"blk_price btc Bitcoin 💰 21",				9000,	21}, */
	/* {"",	"blk_memory",	10,	14}, */
	/* {"",	"blk_cpu",		10,	18}, */
	/* {"",	"blk_moonphase",	18000,	17}, */
	/* {"",	"blk_iplocate", 0,	27}, */
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " - ";
static unsigned int delimLen = 5;
