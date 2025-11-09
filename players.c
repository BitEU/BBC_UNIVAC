/*
 * Player Roster Data
 * 90 all-star players with their best year statistics
 */

#include "baseball.h"

Player player_roster[MAX_PLAYERS];

void initialize_roster(void) {
    int i = 0;
    
    // First Base (positions 0-9)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "PAUL GOLD");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 274; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_FIRST_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "GIANCARLO");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 273; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_FIRST_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "BEN RICE");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 255; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_FIRST_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "PETE ALON");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "METS");
    player_roster[i].batting_avg = 272; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_FIRST_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "STARLING ");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "METS");
    player_roster[i].batting_avg = 270; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_FIRST_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JESSE WIN");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "METS");
    player_roster[i].batting_avg = 229; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_FIRST_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JARED YOU");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "METS");
    player_roster[i].batting_avg = 186; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_FIRST_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "FREDDIE F");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "DODGERS");
    player_roster[i].batting_avg = 295; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_FIRST_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "SHOHEI OH");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "DODGERS");
    player_roster[i].batting_avg = 282; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_FIRST_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "EDDIE ROS");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "DODGERS");
    player_roster[i].batting_avg = 250; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_FIRST_BASE;
    
    // Second Base (positions 10-19)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "AMED ROSA");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 303; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_SECOND_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "DJ LEMAHI");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 266; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_SECOND_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JOSÉ CABA");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 266; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_SECOND_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JAZZ CHIS");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 242; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_SECOND_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "PABLO REY");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 194; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_SECOND_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JORBIT VI");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 161; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_SECOND_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JEFF MCNE");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "METS");
    player_roster[i].batting_avg = 243; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_SECOND_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "LUISANGEL");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "METS");
    player_roster[i].batting_avg = 234; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_SECOND_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "HYESEONG ");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "DODGERS");
    player_roster[i].batting_avg = 280; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_SECOND_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "MIGUEL RO");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "DODGERS");
    player_roster[i].batting_avg = 262; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_SECOND_BASE;
    
    // Third Base (positions 20-29)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "OSWALDO C");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 243; player_roster[i].hand = HAND_BOTH; player_roster[i++].position = POS_THIRD_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "RYAN MCMA");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 208; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_THIRD_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "OSWALD PE");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 152; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_THIRD_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "BRETT BAT");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "METS");
    player_roster[i].batting_avg = 254; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_THIRD_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "MARK VIEN");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "METS");
    player_roster[i].batting_avg = 233; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_THIRD_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "RONNY MAU");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "METS");
    player_roster[i].batting_avg = 226; player_roster[i].hand = HAND_BOTH; player_roster[i++].position = POS_THIRD_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "MAX MUNCY");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "DODGERS");
    player_roster[i].batting_avg = 243; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_THIRD_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "BUDDY KEN");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "DODGERS");
    player_roster[i].batting_avg = 59; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_THIRD_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "ALEX BREG");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "SOX");
    player_roster[i].batting_avg = 273; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_THIRD_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "MARCELO M");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "SOX");
    player_roster[i].batting_avg = 228; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_THIRD_BASE;
    
    // Shortstop (positions 30-39)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "ANTHONY V");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 212; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_SHORTSTOP;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "FRANCISCO");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "METS");
    player_roster[i].batting_avg = 267; player_roster[i].hand = HAND_BOTH; player_roster[i++].position = POS_SHORTSTOP;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "MOOKIE BE");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "DODGERS");
    player_roster[i].batting_avg = 258; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_SHORTSTOP;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "TREVOR ST");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "SOX");
    player_roster[i].batting_avg = 263; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_SHORTSTOP;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "GUNNAR HE");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "ORIOLES");
    player_roster[i].batting_avg = 274; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_SHORTSTOP;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "DANSBY SW");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CUBS");
    player_roster[i].batting_avg = 244; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_SHORTSTOP;
    
    // Left Field (positions 40-49)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JASSON DO");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 257; player_roster[i].hand = HAND_BOTH; player_roster[i++].position = POS_LEFT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "BRANDON N");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "METS");
    player_roster[i].batting_avg = 262; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_LEFT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "MICHAEL C");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "DODGERS");
    player_roster[i].batting_avg = 199; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_LEFT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JARREN DU");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "SOX");
    player_roster[i].batting_avg = 256; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_LEFT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "DYLAN CAR");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "ORIOLES");
    player_roster[i].batting_avg = 203; player_roster[i].hand = HAND_BOTH; player_roster[i++].position = POS_LEFT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "IAN HAPP");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CUBS");
    player_roster[i].batting_avg = 243; player_roster[i].hand = HAND_BOTH; player_roster[i++].position = POS_LEFT_FIELD;
    
    // Center Field (positions 50-59)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "CODY BELL");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 272; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_CENTER_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "AUSTIN SL");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 120; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_CENTER_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JOSÉ AZÓC");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "METS");
    player_roster[i].batting_avg = 278; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_CENTER_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "ALEX CALL");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "DODGERS");
    player_roster[i].batting_avg = 247; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_CENTER_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "ESTEURY R");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "DODGERS");
    player_roster[i].batting_avg = 190; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_CENTER_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "ROMAN ANT");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "SOX");
    player_roster[i].batting_avg = 292; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_CENTER_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JHOSTYNXO");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "SOX");
    player_roster[i].batting_avg = 143; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_CENTER_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "DYLAN BEA");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "ORIOLES");
    player_roster[i].batting_avg = 227; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_CENTER_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "DANIEL JO");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "ORIOLES");
    player_roster[i].batting_avg = 208; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_CENTER_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "COLTON CO");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "ORIOLES");
    player_roster[i].batting_avg = 196; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_CENTER_FIELD;
    
    // Right Field (positions 60-69)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "AARON JUD");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 331; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_RIGHT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JUAN SOTO");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "METS");
    player_roster[i].batting_avg = 263; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_RIGHT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "TEOSCAR H");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "DODGERS");
    player_roster[i].batting_avg = 247; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_RIGHT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "WILYER AB");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "SOX");
    player_roster[i].batting_avg = 247; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_RIGHT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "RAMÓN LAU");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "ORIOLES");
    player_roster[i].batting_avg = 290; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_RIGHT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JEREMIAH ");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "ORIOLES");
    player_roster[i].batting_avg = 276; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_RIGHT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "TYLER O'N");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "ORIOLES");
    player_roster[i].batting_avg = 199; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_RIGHT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "RYAN NODA");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "ORIOLES");
    player_roster[i].batting_avg = 154; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_RIGHT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "COOPER HU");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "ORIOLES");
    player_roster[i].batting_avg = 0; player_roster[i].hand = HAND_BOTH; player_roster[i++].position = POS_RIGHT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "KYLE TUCK");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CUBS");
    player_roster[i].batting_avg = 266; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_RIGHT_FIELD;
    
    // Catcher (positions 70-79)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "TRENT GRI");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 235; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_CATCHER;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "AUSTIN WE");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 219; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_CATCHER;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "J.C. ESCA");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 202; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_CATCHER;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "FRANCISCO");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "METS");
    player_roster[i].batting_avg = 256; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_CATCHER;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "LUIS TORR");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "METS");
    player_roster[i].batting_avg = 226; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_CATCHER;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "TYRONE TA");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "METS");
    player_roster[i].batting_avg = 223; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_CATCHER;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "CEDRIC MU");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "METS");
    player_roster[i].batting_avg = 182; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_CATCHER;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "HAYDEN SE");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "METS");
    player_roster[i].batting_avg = 181; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_CATCHER;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JOSE SIRI");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "METS");
    player_roster[i].batting_avg = 63; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_CATCHER;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "WILL SMIT");
    player_roster[i].year = 2025; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "DODGERS");
    player_roster[i].batting_avg = 296; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_CATCHER;
    
}