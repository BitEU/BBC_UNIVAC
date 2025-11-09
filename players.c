/*
 * Player Roster Data
 * 90 all-star players with their best year statistics
 */

#include "baseball.h"

Player player_roster[MAX_PLAYERS];

void initialize_roster(void) {
    int i = 0;
    
    // First Base (positions 0-9)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "TROSKY");
    player_roster[i].year = 1936; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CLEVE");
    player_roster[i].batting_avg = 343; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_FIRST_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "FOXX");
    player_roster[i].year = 1932; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "ATHLETI");
    player_roster[i].batting_avg = 364; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_FIRST_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "BENSON");
    player_roster[i].year = 1930; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "REDS");
    player_roster[i].batting_avg = 324; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_FIRST_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "MIZE");
    player_roster[i].year = 1939; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CARDS");
    player_roster[i].batting_avg = 349; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_FIRST_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "GEHRIG");
    player_roster[i].year = 1927; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 373; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_FIRST_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "ANSON");
    player_roster[i].year = 1887; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CHICAGO");
    player_roster[i].batting_avg = 421; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_FIRST_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "TERRY");
    player_roster[i].year = 1930; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "GIANTS");
    player_roster[i].batting_avg = 401; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_FIRST_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "YORK");
    player_roster[i].year = 1940; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "DETROIT");
    player_roster[i].batting_avg = 316; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_FIRST_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "SISLER");
    player_roster[i].year = 1922; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BROWNS");
    player_roster[i].batting_avg = 420; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_FIRST_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "BROUTHERS");
    player_roster[i].year = 1887; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "DETROIT");
    player_roster[i].batting_avg = 419; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_FIRST_BASE;
    
    // Second Base (positions 10-19)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "LAJOIE");
    player_roster[i].year = 1901; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "PHILADEL");
    player_roster[i].batting_avg = 426; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_SECOND_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "E COLLINS");
    player_roster[i].year = 1920; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "W SOX");
    player_roster[i].batting_avg = 369; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_SECOND_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "C BURG");
    player_roster[i].year = 1920; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "PIRATES");
    player_roster[i].batting_avg = 298; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_SECOND_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "MACK");
    player_roster[i].year = 1890; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BUFFALO");
    player_roster[i].batting_avg = 298; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_SECOND_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "GORDON");
    player_roster[i].year = 1942; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 322; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_SECOND_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "LAZZERI");
    player_roster[i].year = 1929; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 354; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_SECOND_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "FRISCH");
    player_roster[i].year = 1930; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CARDS");
    player_roster[i].batting_avg = 346; player_roster[i].hand = HAND_BOTH; player_roster[i++].position = POS_SECOND_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "HORNSBY");
    player_roster[i].year = 1924; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CARDS");
    player_roster[i].batting_avg = 424; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_SECOND_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "GEHRINGER");
    player_roster[i].year = 1937; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "DETROIT");
    player_roster[i].batting_avg = 371; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_SECOND_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "ROBINSON");
    player_roster[i].year = 1949; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "DODGERS");
    player_roster[i].batting_avg = 342; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_SECOND_BASE;
    
    // Third Base (positions 20-29)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "KELTNER");
    player_roster[i].year = 1948; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CLEVE");
    player_roster[i].batting_avg = 297; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_THIRD_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "J COLLINS");
    player_roster[i].year = 1897; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BRAVES");
    player_roster[i].batting_avg = 346; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_THIRD_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "J BURG");
    player_roster[i].year = 1922; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "PIRATES");
    player_roster[i].batting_avg = 287; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_THIRD_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "BAKER");
    player_roster[i].year = 1912; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "ATHLETI");
    player_roster[i].batting_avg = 347; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_THIRD_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "HACK");
    player_roster[i].year = 1945; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CUBS");
    player_roster[i].batting_avg = 323; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_THIRD_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "GROH");
    player_roster[i].year = 1922; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "GIANTS");
    player_roster[i].batting_avg = 331; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_THIRD_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "TRAYNOR");
    player_roster[i].year = 1930; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "PIRATES");
    player_roster[i].batting_avg = 366; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_THIRD_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "KELL");
    player_roster[i].year = 1949; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "DETROIT");
    player_roster[i].batting_avg = 343; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_THIRD_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "MCGRAW");
    player_roster[i].year = 1899; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "ORIOLES");
    player_roster[i].batting_avg = 391; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_THIRD_BASE;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "KAMM");
    player_roster[i].year = 1928; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "W SOX");
    player_roster[i].batting_avg = 308; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_THIRD_BASE;
    
    // Shortstop (positions 30-39)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "BOUDREAU");
    player_roster[i].year = 1948; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CLEVE");
    player_roster[i].batting_avg = 355; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_SHORTSTOP;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "SEWELL");
    player_roster[i].year = 1923; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CLEVE");
    player_roster[i].batting_avg = 353; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_SHORTSTOP;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "CROSETTI");
    player_roster[i].year = 1936; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 288; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_SHORTSTOP;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "CRONIN");
    player_roster[i].year = 1930; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "WASHING");
    player_roster[i].batting_avg = 346; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_SHORTSTOP;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "TUMBLIN");
    player_roster[i].year = 1933; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "PIRATES");
    player_roster[i].batting_avg = 279; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_SHORTSTOP;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JENNINGS");
    player_roster[i].year = 1896; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "ORIOLES");
    player_roster[i].batting_avg = 398; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_SHORTSTOP;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "WAGNER");
    player_roster[i].year = 1900; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "PITTSBU");
    player_roster[i].batting_avg = 381; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_SHORTSTOP;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "APPLING");
    player_roster[i].year = 1936; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "W SOX");
    player_roster[i].batting_avg = 388; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_SHORTSTOP;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "VAUGHAN");
    player_roster[i].year = 1935; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "PIRATES");
    player_roster[i].batting_avg = 385; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_SHORTSTOP;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "TRAVIS");
    player_roster[i].year = 1941; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "SENATOR");
    player_roster[i].batting_avg = 359; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_SHORTSTOP;
    
    // Left Field (positions 40-49)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "P WANER");
    player_roster[i].year = 1927; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "PITTSBU");
    player_roster[i].batting_avg = 380; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_LEFT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "RADCLIFF");
    player_roster[i].year = 1940; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BROWNS");
    player_roster[i].batting_avg = 342; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_LEFT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "MEDWICK");
    player_roster[i].year = 1937; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CARDS");
    player_roster[i].batting_avg = 374; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_LEFT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "RUTH");
    player_roster[i].year = 1923; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 393; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_LEFT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "SIMMONS");
    player_roster[i].year = 1930; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "ATHLETI");
    player_roster[i].batting_avg = 381; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_LEFT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "HEILMANN");
    player_roster[i].year = 1923; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "DETROIT");
    player_roster[i].batting_avg = 403; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_LEFT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "DUFFY");
    player_roster[i].year = 1894; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BRAVES");
    player_roster[i].batting_avg = 440; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_LEFT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "MUSIAL");
    player_roster[i].year = 1948; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CARDS");
    player_roster[i].batting_avg = 376; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_LEFT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "WHEAT");
    player_roster[i].year = 1924; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "DODGERS");
    player_roster[i].batting_avg = 375; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_LEFT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "WILLIAMS");
    player_roster[i].year = 1941; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "RED SOX");
    player_roster[i].batting_avg = 406; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_LEFT_FIELD;
    
    // Center Field (positions 50-59)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "DIMAGGIO");
    player_roster[i].year = 1939; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 381; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_CENTER_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "REISER");
    player_roster[i].year = 1941; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "DODGERS");
    player_roster[i].batting_avg = 343; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_CENTER_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "KELLER");
    player_roster[i].year = 1941; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 298; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_CENTER_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "AVERILL");
    player_roster[i].year = 1936; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CLEVE");
    player_roster[i].batting_avg = 378; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_CENTER_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "SPEAKER");
    player_roster[i].year = 1925; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CLEVE");
    player_roster[i].batting_avg = 389; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_CENTER_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JACKSON");
    player_roster[i].year = 1911; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CLEVE");
    player_roster[i].batting_avg = 408; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_CENTER_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "COBB");
    player_roster[i].year = 1911; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "DETROIT");
    player_roster[i].batting_avg = 420; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_CENTER_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "RICE");
    player_roster[i].year = 1925; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "SENATOR");
    player_roster[i].batting_avg = 350; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_CENTER_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "HENRICH");
    player_roster[i].year = 1946; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKEES");
    player_roster[i].batting_avg = 321; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_CENTER_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "O ROURKE");
    player_roster[i].year = 1884; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BUFFALO");
    player_roster[i].batting_avg = 350; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_CENTER_FIELD;
    
    // Right Field (positions 60-69)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "L WANER");
    player_roster[i].year = 1927; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "PITTSBU");
    player_roster[i].batting_avg = 355; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_RIGHT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "BURKETT");
    player_roster[i].year = 1895; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CLEVE");
    player_roster[i].batting_avg = 409; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_RIGHT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "HERMAN");
    player_roster[i].year = 1930; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "DODGERS");
    player_roster[i].batting_avg = 393; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_RIGHT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "CRAWFORD");
    player_roster[i].year = 1911; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "DETROIT");
    player_roster[i].batting_avg = 378; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_RIGHT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "HAMILTON");
    player_roster[i].year = 1889; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "PHILADEL");
    player_roster[i].batting_avg = 380; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_RIGHT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "GREENBERG");
    player_roster[i].year = 1940; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "DETROIT");
    player_roster[i].batting_avg = 340; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_RIGHT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "O DOUL");
    player_roster[i].year = 1929; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "PHILS");
    player_roster[i].batting_avg = 398; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_RIGHT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "DELAHANTY");
    player_roster[i].year = 1899; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "PHILS");
    player_roster[i].batting_avg = 408; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_RIGHT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "CUYLER");
    player_roster[i].year = 1929; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CUBS");
    player_roster[i].batting_avg = 360; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_RIGHT_FIELD;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "OTT");
    player_roster[i].year = 1930; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "GIANTS");
    player_roster[i].batting_avg = 349; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_RIGHT_FIELD;
    
    // Catcher (positions 70-79)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "HAYES");
    player_roster[i].year = 1927; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "SENATOR");
    player_roster[i].batting_avg = 375; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_CATCHER;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "COCHRANE");
    player_roster[i].year = 1930; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "ATHLETI");
    player_roster[i].batting_avg = 357; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_CATCHER;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "DANNING");
    player_roster[i].year = 1939; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "GIANTS");
    player_roster[i].batting_avg = 313; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_CATCHER;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "DICKEY");
    player_roster[i].year = 1936; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 362; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_CATCHER;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "HARTNETT");
    player_roster[i].year = 1937; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CUBS");
    player_roster[i].batting_avg = 354; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_CATCHER;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "BERRA");
    player_roster[i].year = 1950; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 322; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_CATCHER;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "M BURG");
    player_roster[i].year = 1926; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "PIRATES");
    player_roster[i].batting_avg = 336; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_CATCHER;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "LOMBARDI");
    player_roster[i].year = 1942; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BRAVES");
    player_roster[i].batting_avg = 330; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_CATCHER;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "HEGAN");
    player_roster[i].year = 1947; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CLEVE");
    player_roster[i].batting_avg = 249; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_CATCHER;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "KELLY");
    player_roster[i].year = 1886; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CHICAGO");
    player_roster[i].batting_avg = 388; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_CATCHER;
    
    // Pitcher (positions 80-89)
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "RADBOURNE");
    player_roster[i].year = 1884; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "PROVIDEN");
    player_roster[i].batting_avg = 232; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_PITCHER;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "GROVE");
    player_roster[i].year = 1931; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "ATHLETI");
    player_roster[i].batting_avg = 250; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_PITCHER;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "FELLER");
    player_roster[i].year = 1951; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CLEVE");
    player_roster[i].batting_avg = 151; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_PITCHER;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "SPAHN");
    player_roster[i].year = 1947; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "BRAVES");
    player_roster[i].batting_avg = 209; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_PITCHER;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "D DEAN");
    player_roster[i].year = 1934; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CARDS");
    player_roster[i].batting_avg = 295; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_PITCHER;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "YOUNG");
    player_roster[i].year = 1892; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "CLEVE");
    player_roster[i].batting_avg = 250; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_PITCHER;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "NEWHOUSER");
    player_roster[i].year = 1946; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "DETROIT");
    player_roster[i].batting_avg = 233; player_roster[i].hand = HAND_LEFT; player_roster[i++].position = POS_PITCHER;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "JOHNSON");
    player_roster[i].year = 1913; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "SENATOR");
    player_roster[i].batting_avg = 261; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_PITCHER;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "HUBBELL");
    player_roster[i].year = 1936; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "GIANTS");
    player_roster[i].batting_avg = 218; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_PITCHER;
    
    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "RUFFING");
    player_roster[i].year = 1930; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "YANKS");
    player_roster[i].batting_avg = 307; player_roster[i].hand = HAND_RIGHT; player_roster[i++].position = POS_PITCHER;
}