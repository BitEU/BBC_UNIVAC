/*
 * Player Roster Data
 * 162 all-star players with balanced team distribution
 */

#include "baseball.h"

Player player_roster[MAX_PLAYERS];

void initialize_roster(void) {
    int i = 0;
    
    // First Base (positions 0-9)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "MOISÉS BALLESTEROS");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CHC");
    player_roster[i].batting_avg = 298; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_FIRST_BASE; player_roster[i++].j_num = 25;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "FREDDIE FREEMAN");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 295; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_FIRST_BASE; player_roster[i++].j_num = 5;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "RYAN O'HEARN");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BAL");
    player_roster[i].batting_avg = 283; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_FIRST_BASE; player_roster[i++].j_num = 32;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "SHOHEI OHTANI");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 282; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_FIRST_BASE; player_roster[i++].j_num = 17;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "NATHANIEL LOWE");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BOS");
    player_roster[i].batting_avg = 280; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_FIRST_BASE; player_roster[i++].j_num = 37;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "PAUL GOLDSCHMIDT");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 274; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_FIRST_BASE; player_roster[i++].j_num = 48;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "GIANCARLO STANTON");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 273; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_FIRST_BASE; player_roster[i++].j_num = 27;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "PETE ALONSO");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYM");
    player_roster[i].batting_avg = 272; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_FIRST_BASE; player_roster[i++].j_num = 20;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "RAFAEL DEVERS");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BOS");
    player_roster[i].batting_avg = 272; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_FIRST_BASE; player_roster[i++].j_num = 11;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "STARLING MARTE");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYM");
    player_roster[i].batting_avg = 270; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_FIRST_BASE; player_roster[i++].j_num = 6;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "ROB REFSNYDER");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BOS");
    player_roster[i].batting_avg = 269; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_FIRST_BASE; player_roster[i++].j_num = 30;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "MICHAEL BUSCH");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CHC");
    player_roster[i].batting_avg = 261; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_FIRST_BASE; player_roster[i++].j_num = 29;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "BEN RICE");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 255; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_FIRST_BASE; player_roster[i++].j_num = 22;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "EDDIE ROSARIO");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 250; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_FIRST_BASE; player_roster[i++].j_num = 0;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "RYAN MOUNTCASTLE");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BAL");
    player_roster[i].batting_avg = 250; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_FIRST_BASE; player_roster[i++].j_num = 6;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "SEIYA SUZUKI");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CHC");
    player_roster[i].batting_avg = 245; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_FIRST_BASE; player_roster[i++].j_num = 27;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JESSE WINKER");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYM");
    player_roster[i].batting_avg = 229; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_FIRST_BASE; player_roster[i++].j_num = 3;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "COBY MAYO");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BAL");
    player_roster[i].batting_avg = 217; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_FIRST_BASE; player_roster[i++].j_num = 16;
    
    // Second Base (positions 10-19)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "ROMY GONZÁLEZ");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BOS");
    player_roster[i].batting_avg = 305; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_SECOND_BASE; player_roster[i++].j_num = 0;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "AMED ROSARIO");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 303; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_SECOND_BASE; player_roster[i++].j_num = 14;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "NICO HOERNER");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CHC");
    player_roster[i].batting_avg = 297; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_SECOND_BASE; player_roster[i++].j_num = 2;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "NATE EATON");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BOS");
    player_roster[i].batting_avg = 296; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_SECOND_BASE; player_roster[i++].j_num = 40;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "HYESEONG KIM");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 280; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_SECOND_BASE; player_roster[i++].j_num = 6;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "DJ LEMAHIEU");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 266; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_SECOND_BASE; player_roster[i++].j_num = 26;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JOSÉ CABALLERO");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 266; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_SECOND_BASE; player_roster[i++].j_num = 72;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JORDAN WESTBURG");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BAL");
    player_roster[i].batting_avg = 265; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_SECOND_BASE; player_roster[i++].j_num = 11;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "MIGUEL ROJAS");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 262; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_SECOND_BASE; player_roster[i++].j_num = 72;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "NICK SOGARD");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BOS");
    player_roster[i].batting_avg = 260; player_roster[i].hand = HAND_BOTH; player_roster[i].position = POS_SECOND_BASE; player_roster[i++].j_num = 20;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JEFF MCNEIL");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYM");
    player_roster[i].batting_avg = 243; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_SECOND_BASE; player_roster[i++].j_num = 1;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JACKSON HOLLIDAY");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BAL");
    player_roster[i].batting_avg = 242; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_SECOND_BASE; player_roster[i++].j_num = 7;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "LUISANGEL ACUÑA");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYM");
    player_roster[i].batting_avg = 234; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_SECOND_BASE; player_roster[i++].j_num = 2;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "TOMMY EDMAN");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 225; player_roster[i].hand = HAND_BOTH; player_roster[i].position = POS_SECOND_BASE; player_roster[i++].j_num = 25;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "VIDAL BRUJÁN");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CHC");
    player_roster[i].batting_avg = 222; player_roster[i].hand = HAND_BOTH; player_roster[i].position = POS_SECOND_BASE; player_roster[i++].j_num = 0;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "GAGE WORKMAN");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CHC");
    player_roster[i].batting_avg = 214; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_SECOND_BASE; player_roster[i++].j_num = 25;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JORGE MATEO");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BAL");
    player_roster[i].batting_avg = 177; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_SECOND_BASE; player_roster[i++].j_num = 3;
    
    // Third Base (positions 20-29)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "ALEX BREGMAN");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BOS");
    player_roster[i].batting_avg = 273; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_THIRD_BASE; player_roster[i++].j_num = 2;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "BRETT BATY");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYM");
    player_roster[i].batting_avg = 254; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_THIRD_BASE; player_roster[i++].j_num = 7;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "EMMANUEL RIVERA");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BAL");
    player_roster[i].batting_avg = 250; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_THIRD_BASE; player_roster[i++].j_num = 26;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "RAMÓN URÍAS");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BAL");
    player_roster[i].batting_avg = 248; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_THIRD_BASE; player_roster[i++].j_num = 29;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "OSWALDO CABRERA");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 243; player_roster[i].hand = HAND_BOTH; player_roster[i].position = POS_THIRD_BASE; player_roster[i++].j_num = 95;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "MAX MUNCY");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 243; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_THIRD_BASE; player_roster[i++].j_num = 13;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "MARK VIENTOS");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYM");
    player_roster[i].batting_avg = 233; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_THIRD_BASE; player_roster[i++].j_num = 27;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "MARCELO MAYER");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BOS");
    player_roster[i].batting_avg = 228; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_THIRD_BASE; player_roster[i++].j_num = 39;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "RONNY MAURICIO");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYM");
    player_roster[i].batting_avg = 226; player_roster[i].hand = HAND_BOTH; player_roster[i].position = POS_THIRD_BASE; player_roster[i++].j_num = 10;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "MATT SHAW");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CHC");
    player_roster[i].batting_avg = 226; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_THIRD_BASE; player_roster[i++].j_num = 6;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JON BERTI");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CHC");
    player_roster[i].batting_avg = 210; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_THIRD_BASE; player_roster[i++].j_num = 5;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "RYAN MCMAHON");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 208; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_THIRD_BASE; player_roster[i++].j_num = 19;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "OSWALD PERAZA");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 152; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_THIRD_BASE; player_roster[i++].j_num = 18;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "VIMAEL MACHÍN");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BAL");
    player_roster[i].batting_avg = 91; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_THIRD_BASE; player_roster[i++].j_num = 65;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "BUDDY KENNEDY");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 59; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_THIRD_BASE; player_roster[i++].j_num = 46;
    
    // Shortstop (positions 30-39)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "GUNNAR HENDERSON");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BAL");
    player_roster[i].batting_avg = 274; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_SHORTSTOP; player_roster[i++].j_num = 2;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "FRANCISCO LINDOR");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYM");
    player_roster[i].batting_avg = 267; player_roster[i].hand = HAND_BOTH; player_roster[i].position = POS_SHORTSTOP; player_roster[i++].j_num = 12;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "TREVOR STORY");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BOS");
    player_roster[i].batting_avg = 263; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_SHORTSTOP; player_roster[i++].j_num = 10;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "MOOKIE BETTS");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 258; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_SHORTSTOP; player_roster[i++].j_num = 50;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "DANSBY SWANSON");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CHC");
    player_roster[i].batting_avg = 244; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_SHORTSTOP; player_roster[i++].j_num = 7;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "ANTHONY VOLPE");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 212; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_SHORTSTOP; player_roster[i++].j_num = 11;
    
    // Left Field (positions 40-49)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "BRANDON NIMMO");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYM");
    player_roster[i].batting_avg = 262; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_LEFT_FIELD; player_roster[i++].j_num = 9;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JASSON DOMÍNGUEZ");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 257; player_roster[i].hand = HAND_BOTH; player_roster[i].position = POS_LEFT_FIELD; player_roster[i++].j_num = 24;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JARREN DURAN");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BOS");
    player_roster[i].batting_avg = 256; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_LEFT_FIELD; player_roster[i++].j_num = 16;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "IAN HAPP");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CHC");
    player_roster[i].batting_avg = 243; player_roster[i].hand = HAND_BOTH; player_roster[i].position = POS_LEFT_FIELD; player_roster[i++].j_num = 8;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "DYLAN CARLSON");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BAL");
    player_roster[i].batting_avg = 203; player_roster[i].hand = HAND_BOTH; player_roster[i].position = POS_LEFT_FIELD; player_roster[i++].j_num = 15;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "MICHAEL CONFORTO");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 199; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_LEFT_FIELD; player_roster[i++].j_num = 23;
    
    // Center Field (positions 50-59)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "KEVIN ALCÁNTARA");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CHC");
    player_roster[i].batting_avg = 364; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_CENTER_FIELD; player_roster[i++].j_num = 13;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "ROMAN ANTHONY");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BOS");
    player_roster[i].batting_avg = 292; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_CENTER_FIELD; player_roster[i++].j_num = 48;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JOSÉ AZÓCAR");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYM");
    player_roster[i].batting_avg = 278; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_CENTER_FIELD; player_roster[i++].j_num = 0;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "CODY BELLINGER");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 272; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_CENTER_FIELD; player_roster[i++].j_num = 35;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "ALEX CALL");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 247; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_CENTER_FIELD; player_roster[i++].j_num = 12;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "DYLAN BEAVERS");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BAL");
    player_roster[i].batting_avg = 227; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_CENTER_FIELD; player_roster[i++].j_num = 12;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "DANIEL JOHNSON");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BAL");
    player_roster[i].batting_avg = 208; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_CENTER_FIELD; player_roster[i++].j_num = 56;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "COLTON COWSER");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BAL");
    player_roster[i].batting_avg = 196; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_CENTER_FIELD; player_roster[i++].j_num = 17;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "OWEN CAISSIE");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CHC");
    player_roster[i].batting_avg = 192; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_CENTER_FIELD; player_roster[i++].j_num = 19;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "ESTEURY RUIZ");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 190; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_CENTER_FIELD; player_roster[i++].j_num = 27;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JHOSTYNXON GARCÍA");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BOS");
    player_roster[i].batting_avg = 143; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_CENTER_FIELD; player_roster[i++].j_num = 0;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "AUSTIN SLATER");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 120; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_CENTER_FIELD; player_roster[i++].j_num = 29;
    
    // Right Field (positions 60-69)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "AARON JUDGE");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 331; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_RIGHT_FIELD; player_roster[i++].j_num = 99;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "RAMÓN LAUREANO");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BAL");
    player_roster[i].batting_avg = 290; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_RIGHT_FIELD; player_roster[i++].j_num = 12;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JEREMIAH JACKSON");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BAL");
    player_roster[i].batting_avg = 276; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_RIGHT_FIELD; player_roster[i++].j_num = 82;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "KYLE TUCKER");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CHC");
    player_roster[i].batting_avg = 266; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_RIGHT_FIELD; player_roster[i++].j_num = 30;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JUAN SOTO");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYM");
    player_roster[i].batting_avg = 263; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_RIGHT_FIELD; player_roster[i++].j_num = 22;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "TEOSCAR HERNÁNDEZ");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 247; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_RIGHT_FIELD; player_roster[i++].j_num = 37;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "WILYER ABREU");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BOS");
    player_roster[i].batting_avg = 247; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_RIGHT_FIELD; player_roster[i++].j_num = 52;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "TYLER O'NEILL");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BAL");
    player_roster[i].batting_avg = 199; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_RIGHT_FIELD; player_roster[i++].j_num = 9;
    
    // Catcher (positions 70-79)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "VIDAL BRUJÁN");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BAL");
    player_roster[i].batting_avg = 1000; player_roster[i].hand = HAND_BOTH; player_roster[i].position = POS_CATCHER; player_roster[i++].j_num = 40;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "WILL SMITH");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 296; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_CATCHER; player_roster[i++].j_num = 16;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "MIGUEL AMAYA");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CHC");
    player_roster[i].batting_avg = 281; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_CATCHER; player_roster[i++].j_num = 9;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "ANDY PAGES");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 272; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_CATCHER; player_roster[i++].j_num = 44;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "FRANCISCO ALVAREZ");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYM");
    player_roster[i].batting_avg = 256; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_CATCHER; player_roster[i++].j_num = 4;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "CEDDANNE RAFAELA");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BOS");
    player_roster[i].batting_avg = 249; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_CATCHER; player_roster[i++].j_num = 3;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "CARSON KELLY");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CHC");
    player_roster[i].batting_avg = 249; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_CATCHER; player_roster[i++].j_num = 15;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "PETE CROW-ARMSTRONG");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CHC");
    player_roster[i].batting_avg = 247; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_CATCHER; player_roster[i++].j_num = 4;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "CARLOS NARVÁEZ");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BOS");
    player_roster[i].batting_avg = 241; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_CATCHER; player_roster[i++].j_num = 75;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "TRENT GRISHAM");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 235; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_CATCHER; player_roster[i++].j_num = 12;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "GARY SÁNCHEZ");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BAL");
    player_roster[i].batting_avg = 231; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_CATCHER; player_roster[i++].j_num = 99;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "CEDRIC MULLINS");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BAL");
    player_roster[i].batting_avg = 229; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_CATCHER; player_roster[i++].j_num = 31;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "LUIS TORRENS");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYM");
    player_roster[i].batting_avg = 226; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_CATCHER; player_roster[i++].j_num = 13;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "BEN RORTVEDT");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "LAD");
    player_roster[i].batting_avg = 224; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_CATCHER; player_roster[i++].j_num = 47;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "TYRONE TAYLOR");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYM");
    player_roster[i].batting_avg = 223; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_CATCHER; player_roster[i++].j_num = 15;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "AUSTIN WELLS");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 219; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_CATCHER; player_roster[i++].j_num = 28;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "J.C. ESCARRA");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "NYY");
    player_roster[i].batting_avg = 202; player_roster[i].hand = HAND_LEFT; player_roster[i].position = POS_CATCHER; player_roster[i++].j_num = 25;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "CONNOR WONG");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BOS");
    player_roster[i].batting_avg = 190; player_roster[i].hand = HAND_RIGHT; player_roster[i].position = POS_CATCHER; player_roster[i++].j_num = 12;
    
}