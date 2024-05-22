static const char norm_fg[] = "#A1A1A1";
static const char norm_bg[] = "#000000";
static const char norm_border[] = "#000000";

static const char sel_fg[] = "#FFFFFF";
static const char sel_bg[] = "#000000";
static const char sel_border[] = "#FFFFFF";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
