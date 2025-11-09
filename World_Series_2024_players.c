/*
 * Player Roster Data
 * World Series 2024 - LAD vs NYY (using 2025 batting data)
Top 3 players per team per position
 * Compile-time initialization for fast startup on UNIVAC
 */

#include "baseball.h"

// Player roster with compile-time initialization
Player player_roster[MAX_PLAYERS] = {
    // First Base
    {"FREDDIE FREEMAN", 2025, "LAD", 295, 'L', POS_FIRST_BASE, 5},
    {"SHOHEI OHTANI", 2025, "LAD", 282, 'L', POS_FIRST_BASE, 17},
    {"PAUL GOLDSCHMIDT", 2025, "NYY", 274, 'R', POS_FIRST_BASE, 48},
    {"GIANCARLO STANTON", 2025, "NYY", 273, 'R', POS_FIRST_BASE, 27},
    {"BEN RICE", 2025, "NYY", 255, 'L', POS_FIRST_BASE, 22},
    {"EDDIE ROSARIO", 2025, "LAD", 250, 'L', POS_FIRST_BASE, 0},
    // Second Base
    {"AMED ROSARIO", 2025, "NYY", 303, 'R', POS_SECOND_BASE, 14},
    {"HYESEONG KIM", 2025, "LAD", 280, 'L', POS_SECOND_BASE, 6},
    {"DJ LEMAHIEU", 2025, "NYY", 266, 'R', POS_SECOND_BASE, 26},
    {"JOSÉ CABALLERO", 2025, "NYY", 266, 'R', POS_SECOND_BASE, 72},
    {"MIGUEL ROJAS", 2025, "LAD", 262, 'R', POS_SECOND_BASE, 72},
    {"TOMMY EDMAN", 2025, "LAD", 225, 'B', POS_SECOND_BASE, 25},
    // Third Base
    {"MAX MUNCY", 2025, "LAD", 243, 'L', POS_THIRD_BASE, 13},
    {"OSWALDO CABRERA", 2025, "NYY", 243, 'B', POS_THIRD_BASE, 95},
    {"RYAN MCMAHON", 2025, "NYY", 208, 'L', POS_THIRD_BASE, 19},
    {"OSWALD PERAZA", 2025, "NYY", 152, 'R', POS_THIRD_BASE, 18},
    {"BUDDY KENNEDY", 2025, "LAD", 59, 'R', POS_THIRD_BASE, 46},
    // Shortstop
    {"MOOKIE BETTS", 2025, "LAD", 258, 'R', POS_SHORTSTOP, 50},
    {"ANTHONY VOLPE", 2025, "NYY", 212, 'R', POS_SHORTSTOP, 11},
    // Left Field
    {"JASSON DOMÍNGUEZ", 2025, "NYY", 257, 'B', POS_LEFT_FIELD, 24},
    {"MICHAEL CONFORTO", 2025, "LAD", 199, 'L', POS_LEFT_FIELD, 23},
    // Center Field
    {"CODY BELLINGER", 2025, "NYY", 272, 'L', POS_CENTER_FIELD, 35},
    {"ALEX CALL", 2025, "LAD", 247, 'R', POS_CENTER_FIELD, 12},
    {"ESTEURY RUIZ", 2025, "LAD", 190, 'R', POS_CENTER_FIELD, 27},
    {"AUSTIN SLATER", 2025, "NYY", 120, 'R', POS_CENTER_FIELD, 29},
    // Right Field
    {"AARON JUDGE", 2025, "NYY", 331, 'R', POS_RIGHT_FIELD, 99},
    {"TEOSCAR HERNÁNDEZ", 2025, "LAD", 247, 'R', POS_RIGHT_FIELD, 37},
    // Catcher
    {"WILL SMITH", 2025, "LAD", 296, 'R', POS_CATCHER, 16},
    {"ANDY PAGES", 2025, "LAD", 272, 'R', POS_CATCHER, 44},
    {"TRENT GRISHAM", 2025, "NYY", 235, 'L', POS_CATCHER, 12},
    {"BEN RORTVEDT", 2025, "LAD", 224, 'L', POS_CATCHER, 47},
    {"AUSTIN WELLS", 2025, "NYY", 219, 'L', POS_CATCHER, 28},
    {"J.C. ESCARRA", 2025, "NYY", 202, 'L', POS_CATCHER, 25},
};

// Empty function for compatibility - roster is now initialized at compile time
void initialize_roster(void) {
    // No-op: player_roster is already initialized above
}