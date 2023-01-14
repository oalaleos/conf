static const char norm_fg[] = "#f5eade";
static const char norm_bg[] = "#0E0403";
static const char norm_border[] = "#aba39b";

static const char sel_fg[] = "#f5eade";
static const char sel_bg[] = "#F99827";
static const char sel_border[] = "#770000";

static const char urg_fg[] = "#f5eade";
static const char urg_bg[] = "#E45D12";
static const char urg_border[] = "#770000";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};

