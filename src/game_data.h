#pragma once

#include "assets/block.h"
#include "assets/bone.h"
#include "assets/border.h"
#include "assets/next_hold.h"
#include "assets/lineclear.h"
#include "assets/linecollapse.h"
#include "assets/pieceland.h"
#include "assets/piecelock.h"
#include "assets/irs.h"
#include "assets/ready.h"
#include "assets/go.h"
#include "assets/hold.h"
#include "game_types.h"

const float FIELD_X_OFFSET = 16.0f;
const float FIELD_Y_OFFSET = 16.0f * 5.0f;

piece_defs_t ROTATION_STATES = {
    // VOID and X
    {"", "", "", ""},
    {"", "", "", ""},

    // BLOCK_I
    {
        "    "
        "IIII"
        "    "
        "    ",

        "  I "
        "  I "
        "  I "
        "  I ",

        "    "
        "IIII"
        "    "
        "    ",

        "  I "
        "  I "
        "  I "
        "  I ",
    },

    // BLOCK_Z
    {
        "    "
        "ZZ  "
        " ZZ "
        "    ",

        "  Z "
        " ZZ "
        " Z  "
        "    ",

        "    "
        "ZZ  "
        " ZZ "
        "    ",

        "  Z "
        " ZZ "
        " Z  "
        "    "
    },

    // BLOCK_S
    {
        "    "
        " SS "
        "SS  "
        "    ",

        "S   "
        "SS  "
        " S  "
        "    ",

        "    "
        " SS "
        "SS  "
        "    ",

        "S   "
        "SS  "
        " S  "
        "    "
    },

    // BLOCK_J
    {
        "    "
        "JJJ "
        "  J "
        "    ",

        " JJ "
        " J  "
        " J  "
        "    ",

        "    "
        "J   "
        "JJJ "
        "    ",

        " J  "
        " J  "
        "JJ  "
        "    "
    },

    // BLOCK_L
    {
        "    "
        "LLL "
        "L   "
        "    ",

        " L  "
        " L  "
        " LL "
        "    ",

        "    "
        "  L "
        "LLL "
        "    ",

        "LL  "
        " L  "
        " L  "
        "    ",
    },

    // BLOCK_O
    {
        "    "
        " OO "
        " OO "
        "    ",

        "    "
        " OO "
        " OO "
        "    ",

        "    "
        " OO "
        " OO "
        "    ",

        "    "
        " OO "
        " OO "
        "    ",
    },

    // BLOCK_T
    {
        "    "
        "TTT "
        " T  "
        "    ",

        " T  "
        " TT "
        " T  "
        "    ",

        "    "
        " T  "
        "TTT "
        "    ",

        " T  "
        "TT  "
        " T  "
        "    "
    }
};

size_t default_game_timing_len = 45;
timing_t default_game_timing[] = {
    {0,       4, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {30,      6, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {35,      8, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {40,     10, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {50,     12, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {60,     16, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {70,     32, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {80,     48, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {90,     64, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {100,    80, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {120,    96, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {140,   112, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {160,   128, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {170,   144, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {200,     4, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {220,    32, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {230,    64, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {233,    96, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {236,   128, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {239,   160, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {243,   192, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {247,   224, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {251,   256, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {300,   512, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {330,   768, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {360,  1024, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {400,  1280, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {420,  1024, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {450,   768, 27, 27, 16, 30, 40,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {500,  5120, 27, 27, 10, 30, 25,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {600,  5120, 27, 18, 10, 30, 16,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {700,  5120, 18, 14, 10, 30, 12,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {800,  5120, 14,  8, 10, 30,  6,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {900,  5120, 14,  8,  8, 17,  6,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1000, 5120,  8,  8,  8, 16,  6,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1200, 5120,  7,  7,  8, 15,  5,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1500, 5120,  6,  6,  8, 15,  4,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {2000, 5120,  5,  5,  7, 12,  3,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {2500, 5120,  5,  5,  6, 10,  3,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {3000, 5120,  5,  5,  6,  8,  3,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {4000, 5120, 27, 27, 10, 30, 25, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {4100, 5120, 27, 27, 10, 30, 25, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {4200, 5120, 27, 27, 10, 30, 25,  64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {4300, 5120, 27, 27, 10, 30, 25,  32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {-1,      0,  0,  0,  0,  0,  0,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};
timing_t default_credits_roll_timing = {4499, 5120, 27, 27, 10, 30, 25, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3600};

char* tgm2_plus_sequence[] = {
    " XXXXXXXXX",
    " XXXXXXXXX",
    " XXXXXXXXX",
    " XXXXXXXXX",
    "XXXXXXXXX ",
    "XXXXXXXXX ",
    "XXXXXXXXX ",
    "XXXXXXXXX ",
    "  XXXXXXXX",
    " XXXXXXXXX",
    " XXXXXXXXX",
    "XXXXXXXX  ",
    "XXXXXXXXX ",
    "XXXXXXXXX ",
    "XX XXXXXXX",
    "X  XXXXXXX",
    "X XXXXXXXX",
    "XXXXXXX XX",
    "XXXXXXX  X",
    "XXXXXXXX X",
    "XXXX  XXXX",
    "XXXX  XXXX",
    "XXXX XXXXX",
    "XXX   XXXX"
};

size_t effects_list_len = 27;
effect_def_t effects_list[27] = {
    {"TORIKAN_SCOPE_SECTION", TORIKAN_SCOPE_MASK},
    //{"TORIKAN_SCOPE_GAME", 0},
    {"TORIKAN_EFFECT_GAMEOVER", TORIKAN_EFFECT_MASK},
    //{"TORIKAN_EFFECT_ROLL", 0},
    {"GARBAGE_TGM2P_SEQUENCE", TGM2_PLUS_SEQUENCE_MASK},
    //{"GARBAGE_COPY_BOTTOM", 0},
    {"GARBAGE_CLEARS_ROLLBACK", TI_GARBAGE_QUOTA},
    //{"GARBAGE_CLEARS_STALL", 0},
    {"VISIBILITY_RESET_ALL", RESET_VISIBILITY_MASK},
    {"VISIBILITY_RESET_VISIBLE", RESET_VISIBILITY_TIMER_MASK},
    {"VISIBILITY_HINT_ONCE", INVISIBILITY_HINT_ONCE_MASK},
    {"VISIBILITY_HINT_LOCKFLASH", INVISIBILITY_HINT_FLASH_MASK},
    {"FROZEN_ROWS_CLEAR", FROZEN_RESET_MASK},
    {"CLEAR_FIELD", CLEAR_FIELD_MASK},
    {"BONES_SKIN", BONES_MASK},
    {"BIG_HALF_PIECE", BIG_MODE_HALF_PIECE_MASK},
    {"BIG_MODE", BIG_MODE_MASK},
    {"BIG_PIECE", BIG_PIECE_MASK},
    {"SELECTIVE_GRAVITY", SELECTIVE_GRAVITY_MASK},
    {"FIELD_SHOTGUN", FIELD_SHOTGUN_MASK},
    {"FIELD_LASER", FIELD_LASER_MASK},
    {"FIELD_NEGATE", FIELD_NEGATE_MASK},
    {"FIELD_PUSH_LEFT", FIELD_PUSH_LEFT_MASK},
    {"FIELD_PUSH_RIGHT", FIELD_PUSH_RIGHT_MASK},
    {"FIELD_PUSH_DOWN", FIELD_PUSH_DOWN_MASK},
    {"FIELD_DEL_UPPER", FIELD_DEL_UPPER_MASK},
    {"FIELD_DEL_LOWER", FIELD_DEL_LOWER_MASK},
    {"FIELD_DEL_EVEN", FIELD_DEL_EVEN_MASK},
    {"FIELD_180", FIELD_180_MASK},
    {"RANDOM_ITEM", RANDOM_ITEM_MASK},
    {"ITEM_MODE", ITEM_MODE_MASK}
};
