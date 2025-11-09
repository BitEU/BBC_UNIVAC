/*
 * World Series 2024 Player Roster Data
 * LAD vs NYY (using 2025 batting data)
 * Top 3 players per team per position (6 total per position)
 */

#include "baseball.h"

Player player_roster[MAX_PLAYERS];

void initialize_roster(void) {
    int i = 0;
    
    // First Base (positions 0-9)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "FREDDIE FREEMAN");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 295; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_FIRST_BASE; player_roster[i++].j_num = 5;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "SHOHEI OHTANI");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 282; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_FIRST_BASE; player_roster[i++].j_num = 17;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "PAUL GOLDSCHMIDT");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 274; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_FIRST_BASE; player_roster[i++].j_num = 48;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "GIANCARLO STANTON");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 273; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_FIRST_BASE; player_roster[i++].j_num = 27;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "BEN RICE");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 255; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_FIRST_BASE; player_roster[i++].j_num = 22;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "EDDIE ROSARIO");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 250; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_FIRST_BASE; player_roster[i++].j_num = 0;
    
    // Second Base (positions 10-19)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "AMED ROSARIO");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 303; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_SECOND_BASE; player_roster[i++].j_num = 14;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "HYESEONG KIM");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 280; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_SECOND_BASE; player_roster[i++].j_num = 6;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "DJ LEMAHIEU");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 266; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_SECOND_BASE; player_roster[i++].j_num = 26;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JOSÉ CABALLERO");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 266; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_SECOND_BASE; player_roster[i++].j_num = 72;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "MIGUEL ROJAS");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 262; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_SECOND_BASE; player_roster[i++].j_num = 72;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "TOMMY EDMAN");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 225; player_roster[i].hand = HAND_BOTH; player_roster[i].position = POS_SECOND_BASE; player_roster[i++].j_num = 25;
    
    // Third Base (positions 20-29)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "MAX MUNCY");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 243; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_THIRD_BASE; player_roster[i++].j_num = 13;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "OSWALDO CABRERA");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 243; player_roster[i].hand = HAND_BOTH; player_roster[i].position = POS_THIRD_BASE; player_roster[i++].j_num = 95;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "RYAN MCMAHON");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 208; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_THIRD_BASE; player_roster[i++].j_num = 19;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "OSWALD PERAZA");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 152; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_THIRD_BASE; player_roster[i++].j_num = 18;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "BUDDY KENNEDY");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 59; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_THIRD_BASE; player_roster[i++].j_num = 46;
    
    // Shortstop (positions 30-39)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "MOOKIE BETTS");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 258; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_SHORTSTOP; player_roster[i++].j_num = 50;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "ANTHONY VOLPE");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 212; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_SHORTSTOP; player_roster[i++].j_num = 11;
    
    // Left Field (positions 40-49)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JASSON DOMÍNGUEZ");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 257; player_roster[i].hand = HAND_BOTH; player_roster[i].position = POS_LEFT_FIELD; player_roster[i++].j_num = 24;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "MICHAEL CONFORTO");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 199; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_LEFT_FIELD; player_roster[i++].j_num = 23;
    
    // Center Field (positions 50-59)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "CODY BELLINGER");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 272; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_CENTER_FIELD; player_roster[i++].j_num = 35;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "ALEX CALL");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 247; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_CENTER_FIELD; player_roster[i++].j_num = 12;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "ESTEURY RUIZ");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 190; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_CENTER_FIELD; player_roster[i++].j_num = 27;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "AUSTIN SLATER");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 120; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_CENTER_FIELD; player_roster[i++].j_num = 29;
    
    // Right Field (positions 60-69)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "AARON JUDGE");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 331; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_RIGHT_FIELD; player_roster[i++].j_num = 99;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "TEOSCAR HERNÁNDEZ");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 247; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_RIGHT_FIELD; player_roster[i++].j_num = 37;
    
    // Catcher (positions 70-79)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "WILL SMITH");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 296; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_CATCHER; player_roster[i++].j_num = 16;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "ANDY PAGES");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 272; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_CATCHER; player_roster[i++].j_num = 44;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "TRENT GRISHAM");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 235; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_CATCHER; player_roster[i++].j_num = 12;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "BEN RORTVEDT");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 224; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_CATCHER; player_roster[i++].j_num = 47;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "AUSTIN WELLS");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 219; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_CATCHER; player_roster[i++].j_num = 28;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "J.C. ESCARRA");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 202; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_CATCHER; player_roster[i++].j_num = 25;
    
}