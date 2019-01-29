static const char norm_fg[] = "#b3b5b8";
static const char norm_bg[] = "#0d0d0b";
static const char norm_border[] = "#7d7e80";

static const char sel_fg[] = "#b3b5b8";
static const char sel_bg[] = "#675A51";
static const char sel_border[] = "#b3b5b8";

static const char urg_fg[] = "#b3b5b8";
static const char urg_bg[] = "#584E46";
static const char urg_border[] = "#584E46";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
