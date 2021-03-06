#include <avr/pgmspace.h>



const int startup_charsPerLine = 80;
const int startup_num_lines = 1;
const PROGMEM byte startup_message[startup_num_lines][startup_charsPerLine] = {
 " ",

  
};

const int charsPerLine0 = 73;   // this is the max # of chars per line
const int num_lines0 = 41;
const PROGMEM  byte message0[num_lines0][charsPerLine0] = {
"                  \x0A\x0A;8                   8;        ",
"                        '8                     8'       ", 
"                         8.                    8;       ",
"                      ; 88                     88  8    ", 
"                    .8   8;                   ;8   8.   ", 
"                    88    8;                 ;8    8'   ",
"                   ;;      8;.             ,;8     88   ",
"                   ;8;      8;8   ,   ,   ,;8      88   ",
"                    88.      88;  $...$  ;88     ,88'   ",
"                     '88...   888,88888 ;8    ,;;8'     ",
"                        ';888....;8'.'8;,;;;88;''       ", 
"                     .,88.....888;;. .;888,...;888;.    ",
"                    ;88 ''';88;.,;8,.,8;.888;''  88;    ",
"                   888         ;88;888;88..         8;  ",
"                  88         ,;888**..**88;8..       88 ",
"                 ;8      ,;;8;88**......**88;8;..     88.",
"                 ;8     ;88  88**........**88 ;88     88 ",
"                  8.   ,88;  88*....  ....*88  ;8;    ; ",
"                   ;   ;88   88*....  ....*88  ;8;   ;  ",   
"                   8   ;88    888**....**888   88;      ", 
"                       '88     888**..**888    88;      ", 
"                        88       88888888      88       ",
"                         88        8888       ;8        ",
"                         '8;                 ;8'        ",
"                           8;              ,;8          ",
"                             8,           8'            ",
"  ",
"   ####  #    #        ##### #    # ######    #    # ###### #####   #### ",  
"  #    # #    #          #   #    # #         #    # #      #    # #     ",  
"  #    # ######          #   ###### #####     #    # #####  #####   #### ",  
"  #    # #    # ###      #   #    # #         # ## # #      #    #      #", 
"  #    # #    # ###      #   #    # #         ##  ## #      #    # #    #",
"   ####  #    #  #       #   #    # ######    #    # ###### #####   #### ",
"                #",                                                         
"             ",                                                            
"            #    # ######    #    # ######   ##   #    # ######",             
"            #    # #         #    # #       #  #  #    # #     ",            
"            #    # #####     #    # #####  #    # #    # ##### ",            
"            # ## # #         # ## # #      ###### #    # #     ",             
"            ##  ## #         ##  ## #      #    #  #  #  #     ",             
"            #    # ######    #    # ###### #    #   ##   ######\x0c",            

};

const int charsPerLine1 = 80;   // this is the max # of chars per line
const int num_lines1 = 23;
const PROGMEM  byte message1[num_lines1][charsPerLine1] = {
"    \x0A\x0A ================================",
"    /\\                              \\",
"   /++\\    ==========================\\",
"   \\+++\\   \\ ************************/",
"    \\+++\\   \\=================== ***/",
"     \\+++\\   \\             /+++/***/",
"      \\+++\\   \\           /+++/***/",
"       \\+++\\   \\         /+++/***/",
"        \\+++\\   \\       /+++/***/",
"         \\+++\\   \\     /+++/***/",
"          \\+++\\   \\   /+++/***/",
"           \\+++\\   \\ /+++/***/",
"            \\+++\\   /+++/***/",
"             \\+++\\ /+++/***/",
"              \\+++++++/***/",
"               \\+++++/***/",
"                \\+++/***/",
"                 \\+/===/\x0c",
};

const int charsPerLine2 = 80;   // this is the max # of chars per line
const int num_lines2 = 22;
const PROGMEM  byte message2[num_lines2][charsPerLine2] = {
"            \x0A\x0A  .sssssssss.",
"                 .sssssssssssssssssss",
"               sssssssssssssssssssssssss",
"             ssssssssssssssssssssssssssss",
"             @@sssssssssssssssssssssss@ss",
"             |s@@@@sssssssssssssss@@@@s|s",
"      =======|sssss@@@@@sssss@@@@@sssss|s",
"    /         sssssssss@sssss@sssssssss|s",
"   /  .------+.ssssssss@sssss@ssssssss.|",
"  /  /       |...sssssss@sss@sssssss...|",
" |  |        |.......sss@sss@ssss......|",
" |  |        |..........s@ss@sss.......|",
" |  |        |...........@ss@..........|",
"  \\  \\       |............ss@..........|",
"   \\  '------+...........ss@...........|",
"     \\=========.........................|",
"             |.........................|",
"            /...........................\\",
"            |.............................|",
"               |.......................|",
"                  |...............|\x0c",
};

const int charsPerLine3 = 80;   // this is the max # of chars per line
const int num_lines3 = 33;
const PROGMEM  byte message3[num_lines3][charsPerLine3] = {
"            \x0A\x0A      iWs                                 ,W[",
"                          W@@W.                              g@@[",
"                         i@@@@@s                           g@@@@W",
"                         @@@@@@@W.                       ,W@@@@@@",
"                        ]@@@@@@@@@W.   ,_______.       ,m@@@@@@@@i",
"                       ,@@@@@@@@@@@@W@@@@@@@@@@@@@@mm_g@@@@@@@@@@[",
"                       d@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@",
"                      i@@@@@@@A*~~~~~VM@@@@@@@@@@Af~~~~V*@@@@@@@@@i",
"                      @@@@@A~          'M@@@@@@A`         'V@@@@@@b",
"                     d@@@*`              Y@@@@f              V@@@@@.",
"                    i@@A`                 M@@P                 V@@@b",
"                   ,@@A                   '@@                   !@@@.",
"                   @|P                     [                     '@@W",
"                  d@@            ,         ]!        ,            ]@@b",
"                 g@@[          ,W@@s       ]       ,W@@s           @@@i",
"                i@@@[          W@@@@i      ]       W@@@@i          @@@@i",
"               i@@@@[          @@@@@[      ]       @@@@@[          @@@@@i",
"              g@@@@@[          @@@@@!      @[      @@@@@[          @@@@@@i",
"             d@@@@@@@          !@@@P      iAW      !@@@A          ]@@@@@@@i",
"            W@@@@@@@@b          '~~      ,Z Yi      '~~          ,@@@@@@@@@",
"            '*@@@@@@@@s                  Z`  Y.                 ,W@@@@@@@@A",
"              'M@@@*f**W.              ,Z     Vs               ,W*~~~M@@@f",
"                'M@    'Vs.          ,z~       'N_           ,Z~     d@P",
"               M@@@       ~\\-_   __z/` ,gmW@@mm_ '+e_.   __=/`      ,@@@@",
"                'VMW           ~~~    g@@@@@@@@@W     ~~~          ,WAf",
"                   ~N.                @@@@@@@@@@@!                ,Z`",
"                     V.               !M@@@@@@@@f                gf-",
"                      'N.               '~@@@f~                ,Z`",
"                        Vc.                                  _Zf",
"                          ~e_                             ,gY~",
"                            'V=_          -@@D         ,gY~ '",
"                                ~\\=__.           ,__z=~`",
"                                       '~~~*==Y*f~~~\",\x0c     ",
};


const int charsPerLine4 = 75;   // this is the max # of chars per line
const int num_lines4 = 26;
const PROGMEM  byte message4[num_lines4][charsPerLine4] = {
"                          \x0A\x0AwWWWWWWWww.   ",                   
"                            WWW\"\"\"::::::\"\"WWw ",                  
"                         wWWW\" .,wWWWWWWw..  WWw.  ",         
"                      wWW\"   W888888888888W  \"WXX. ",        
"                     wWW\"   M88888i##'   '88M  \"WWX.",      
"                   wWWW\"   M88888##d#     oo88M   WWMX.",     
"                  wWWW\"   :W88888####,   ,8888M;   WWIZ.",     
"                wWWWW\"     W88888####428888888W     WWWXx ",
"                 \"WIZ       W8n889######98888W       WWXx.",
"                  \"Wm,       W88888999988888W        >WWR\" ",
"                   \"WMm.      \"WW88888888WW\"        mmMM\" ",
"                     \"Wmm.       \"WWWWWW\"        ,whAT?\"",
"                      \"\"MMMmm..            ,,mMMMM\"\"\"",
"                           \"\"MMMMMMMMMMMMMM\"\"\"\"",

"                                     /$$",                              
"                                    | $$ ",                             
" /$$$$$$$   /$$$$$$         /$$$$$$$| $$  /$$$$$$   /$$$$$$   /$$$$$$ ",
"| $$,,  $$ /$$,,  $$       /$$,,,,,/| $$ /$$,,  $$ /$$,,  $$ /$$,,  $$",
"| $$  \\ $$| $$  \\ $$      |  $$$$$$ | $$| $$$$$$$$| $$$$$$$$| $$  \\ $$",
"| $$  | $$| $$  | $$       \\,,,,  $$| $$| $$,,,,,/| $$,,,,,/| $$  | $$",
"| $$  | $$|  $$$$$$/       /$$$$$$$/| $$|  $$$$$$$|  $$$$$$$| $$$$$$$/",
"|,,/  |,,/ \\,,,,,,/       |,,,,,,,/ |,,/ \\,,,,,,,/ \\,,,,,,,/| $$,,,,/ ",
"                                                            | $$      ",
"                                                            | $$      ",
"                                                            |,,/      \x0c",
};

const int charsPerLine5 = 75;   // this is the max # of chars per line
const int num_lines5 = 22;
const PROGMEM  byte message5[num_lines5][charsPerLine5] = {
                                                                      
"                  \x0A\x0A  xxxxxxxxxx                                     ",
"               MWMWMWWMWMWMWMWMWMWMWMWMW                                    ",
"           IIIIMWMWMWMWMWMWMWMWMWMWMWMWMWMttii                              ",
"     IIYVVXMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWxx                         ",
"    IWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMx                  ",
"IIWMWMWMWMWMWMWMWMWBYMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMx               ",
" ''MWMWMWMWMWM''''''''           '''''MWMWMWMWMWMWMWMWMWMWMWMWMWti          ",
"    ''                                     ''''MWMWMWMWMWMWMWMWMWMWMWMWMti= ",
"                                   xxxxx         '  '''YWMWMWMWMWMWMWMWMWMW+",
"                           XXXXXXXXXXXXXXXXXXXXx             'YWMWMWMWMWMWMW",
"                        XXXXXXXXWWWWWWWWWWWWWWWWXXXX               ''''''   ",
"                     XXXXXWWW'   W88N88@888888WWWWWXX                       ",
"                  XXXXXXWWW'    M88N88GGGGGG888*8M 'WMBX                    ",
"              XXXXXXXXWWW'     M88888WWRWW   8oo88M   WWMX                  ",
"        'XXXXXXXXXXXXWW'       WN8888WWWW     @@@8M    BMBRX                ",
"       XXXXXXXX=MMWW'          W8N888WWWWW   88888W      XRBRXX             ",
"        ''XXXXXMM               W8@889WWWWWM8@8N8W           RRXx           ",
"        '''  MMM:::              W888N89999888@8W              'RXV         ",
"        '''''      MMMm            WW888N88888WW          mmMMMMMRXx        ",
"                    ''MMmm            WWWWWWW         ,miMM'''    ''`       ",
"                         ''MMMMmm              _,mMMMM'''                   ",
"                               ''MMMMMMMMMMMMM'''\x0c                           ",
};

const int charsPerLine6 = 75;   // this is the max # of chars per line
const int num_lines6 = 49;
const PROGMEM  byte message6[num_lines6][charsPerLine6] = {
                                
"\x0A\x0A---======,,,,,,,===*8888N8888888888888888888D                            ",                              
"\\8I                        888888888888888888888                        ",                           
"  8888O,                  :888888888888888888888888 ==========,          ",            
"      \\88888\\             8888888888888888888888''           8888,     ",         
"              \\           88888888888888888888              8888888     ",        
"                \\        888888888888888   ~888         ,888888888      ",         
"                  8     888888888888888      788N      ,8888888888       ",         
"                  8    888888888888888        O888    ,8888888888        ",          
"                 8     888888888888888        +8887  Z88888888           ",             
"                 8     +8888888888888          88888888887               ",                 
"                  8     888888888888?        8888888888888               ",                 
"                  N8     88888888888       /     \\888888888             ",                
"                   \\     8888888888       | ((*)) |888888888            ",               
"                    \\    8888888888     ,88\\     /88888888888          ",             
"                     8  88888888888    =888888888888888888888            ",           
"                     8  ~888888888~   :888888888888888888888888          ",         
"                     8  88D8888888    888888888888888888888888888        ",       
"                     8  88   8888+    8888888888888888888888888888       ",     
"                     8        88     8888888888888888888888888888888     ",       
"                     8        8+     8888888888888888888888888888888     ",       
"                    /                888888888888888888888888888888      ",     
"                   /                888888888888888888888888888888       ",   
"                  *                888888888888888888888888888888        ", 
"                  8                88888888888888888888888888888         ",       
"                  8  *    88      | 88  88888888888888888888888          ",     
"                  8 888 :888     | 88    8888888888888888888888          ",   
"                  8 ?888888     / :8      88888888888888888888           ",             
"                  \\ 8888,     /  88        888888888888888888           ",          
"                   \\  **     /  88         88888888888888888            ",        
"                    \\      /   8:           888888888888888             ",      
"                     \\      78Z              8888888888888              ",     
"                       8888?                  88888888888                ",   
" ",
"              ######    #######     ###    ########     #######  ########", 
"             ##    ##  ##     ##   ## ##      ##       ##     ## ##      ",
"             ##        ##     ##  ##   ##     ##       ##     ## ##      ", 
"             ##   #### ##     ## ##     ##    ##       ##     ## ######  ", 
"             ##    ##  ##     ## #########    ##       ##     ## ##      ",   
"              ######    #######  ##     ##    ##        #######  ##      ",
"  ",
"                 /$$$$$$$$ /$$   /$$ /$$   /$$ /$$   /$$ /$$$$$$         ",
"                | $$,,,,,/| $$$ | $$| $$$ | $$| $$  | $$|,  $$,/         ",
"                | $$      | $$$$| $$| $$$$| $$| $$  | $$  | $$           ",
"                | $$$$$   | $$ $$ $$| $$ $$ $$| $$  | $$  | $$           ",
"                | $$,,/   | $$  $$$$| $$  $$$$| $$  | $$  | $$           ",
"                | $$      | $$\\  $$$| $$\\  $$$| $$  | $$  | $$         ",
"                | $$$$$$$$| $$ \\  $$| $$ \\  $$|  $$$$$$/ /$$$$$$       ",
"                |,,,,,,,,/|,,/  \\,,/|,,/  \\,,/ \\,,,,,,/ |,,,,,,/\x0c  ",
};

const int charsPerLine7 = 75;   // this is the max # of chars per line
const int num_lines7 = 26;
const PROGMEM  byte message7[num_lines7][charsPerLine7] = {
"                   \x0A\x0Aoooo$$$$$$$$$$$$oooo ",
"                      oo$$$$$$$$$$$$$$$$$$$$$$$$o",
"                   oo$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o         o$   $$ o$",
"   o $ oo        o$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o       $$ $$ $$o$",
"oo $ $ '$      o$$$$$$$$$    $$$$$$$$$$$$$    $$$$$$$$$o       $$$o$$o$",
"'$$$$$$o$     o$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$o    $$$$$$$$",
"  $$$$$$$    $$$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$$$$$$$$$$$$$$",
"  $$$$$$$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$    $$$$$$$$$$$$$$  '''$$$",
"   '$$$''''$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     '$$$",
"    $$$   o$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     '$$$o",
"   o$$'   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$       $$$o",
"   $$$    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$' '$$$$$$ooooo$$$$o",
"  o$$$oooo$$$$$  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   o$$$$$$$$$$$$$$$$$",
"  $$$$$$$$'$$$$   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     $$$$''''''''",
" ''''       $$$$    '$$$$$$$$$$$$$$$$$$$$$$$$$$$$'      o$$$",
"            '$$$o     '''$$$$$$$$$$$$$$$$$$'$$'         $$$",
"              $$$o          '$$''$$$$$$''''           o$$$",
"               $$$$o                 oo             o$$$'",
"                '$$$$o      o$$$$$$o'$$$$o        o$$$$",
"                  '$$$$$oo     ''$$$$o$$$$$o   o$$$$''",  
"                     ''$$$$$oooo  '$$$o$$$$$$$$$'''",
"                        ''$$$$$$$oo $$$$$$$$$$   ",    
"                                ''''$$$$$$$$$$$  ",      
"                                    $$$$$$$$$$$$  ",     
"                                     $$$$$$$$$$'  ",    
"                                      '$$$''''\x0c",
};

const int charsPerLine8 = 80;   // this is the max # of chars per line
const int num_lines8 = 24;
const PROGMEM  byte message8[num_lines8][charsPerLine8] = {
"               \x0A\x0A .,aadd\"'    `\"bbaa,.",
"            ,ad8888P'          `Y8888ba,",
"         ,a88888888              88888888a,",
"       a88888888888              88888888888a",
"     a8888888888888b,          ,d8888888888888a",
"    d8888888888888888b,_    _,d8888888888888888b",
"   d88888888888888888888888888888888888888888888b",
"  d8888888888888888888888888888888888888888888888b",
" I888888888888888888888888888888888888888888888888I",
",88888888888888888888888888888888888888888888888888,",
"I8888888888888888PY8888888PY88888888888888888888888I",
"8888888888888888\"  \"88888\"  \"88888888888888888888888",
"8::::::::::::::'    `:::'    `:::::::::::::::::::::8",
"Ib:::::::::::\"        \"        `::::::' `:::::::::dI",
"`8888888888P            Y88888888888P     Y88888888'",
" Ib:::::::'              `:::::::::'       `:::::dI",
"  Yb::::\"                  \":::::\"           \"::dP",
"   Y88P                      Y8P               `P",
"    Y'                        \"                 ",
"                                `:::::::::::;8\"",
"       \"888888888888888888888888888888888888\"",
"         `\"8;::::::::::::::::::::::::::;8\"'",
"            `\"Ya;::::::::::::::::::;aP\"'",
"                ``\"\"YYbbaaaaddPP\"\"''\x0c",
};


const int charsPerLine9 = 80;   // this is the max # of chars per line
const int num_lines9 = 30;
const PROGMEM  byte message9[num_lines9][charsPerLine9] = {
"                    \x0A\x0A.,,uod8B8bou,,.",
"              ..,uod8BBBBBBBBBBBBBBBBRPFT?l!i:.",
"         ,=m8BBBBBBBBBBBBBBBRPFT?!||||||||||||||",
"         !...:!TVBBBRPFT||||||||||!!^^\"\"'   ||||",
"         !.......:!?|||||!!^^\"\"'            ||||",
"         !.........||||                     ||||",
"         !.........||||                     ||||",
"         !.........||||                     ||||",
"         !.........||||                     ||||",
"         !.........||||                     ||||",
"         !.........||||                     ||||",
"         `.........||||                    ,||||",
"          .;.......||||               _.-!!|||||",
"   .,uodWBBBBb.....||||       _.-!!|||||||||!:'",
"!YBBBBBBBBBBBBBBb..!|||:..-!!|||||||!iof68BBBBBb....",
"!..YBBBBBBBBBBBBBBb!!||||||||!iof68BBBBBBRPFT?!::   `.",
"!....YBBBBBBBBBBBBBBbaaitf68BBBBBBRPFT?!:::::::::     `.",
"!......YBBBBBBBBBBBBBBBBBBBRPFT?!::::::;:!^\"`;:::       `.",
"!........YBBBBBBBBBBRPFT?!::::::::::^''...::::::;         iBBbo.",
"`..........YBRPFT?!::::::::::::::::::::::::;iof68bo.      WBBBBbo.",
"  `..........:::::::::::::::::::::::;iof688888888888b.     `YBBBP^'",
"    `........::::::::::::::::;iof688888888888888888888b.     `",
"      `......:::::::::;iof688888888888888888888888888888b.",
"        `....:::;iof688888888888888888888888888888888899fT!",
"          `..::!8888888888888888888888888888888899fT|!^\"'",
"            `' !!988888888888888888888888899fT|!^\"'",
"                `!!8888888888888888899fT|!^\"'",
"                  `!988888888899fT|!^\"'",
"                    `!9899fT|!^\"'\x0c",
};

// parallel port pin# = arduino pin#
const int nStrobe = 2;
const int data_0 = 3;
const int data_1 = 4;
const int data_2 = 5;
const int data_3 = 6;
const int data_4 = 7;
const int data_5 = 8;
const int data_6 = 9;
const int data_7 = 10;
const int nAck = 11;
const int busy = 12;

const int strobeWait = 2;   // microseconds to strobe for


void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(1));
  pinMode(nStrobe, OUTPUT);      // is active LOW
  digitalWrite(nStrobe, HIGH);   // set HIGH
  pinMode(data_0, OUTPUT);
  pinMode(data_1, OUTPUT);
  pinMode(data_2, OUTPUT);
  pinMode(data_3, OUTPUT);
  pinMode(data_4, OUTPUT);
  pinMode(data_5, OUTPUT);
  pinMode(data_6, OUTPUT);
  pinMode(data_7, OUTPUT);

  pinMode(nAck, INPUT);     // is active LOW
  pinMode(busy, INPUT); 

  pinMode(13, OUTPUT);
  pinMode(14, INPUT);   // analog pin 0 on duemilanove and uno
  digitalWrite(14, HIGH); // enable pull-up
 
  delay(1000);
 
  resetPrinter();
 
  //printStartupMessage();
 
  resetPrinter();
 
  Serial.println("Delay for 5 sec");
  delay(500);
 
  Serial.println("Startup complete");
}

void loop() {
while(digitalRead(14) == HIGH) {
  
   // wait
}

int randPrint = random(10);
  switch(randPrint)
  {
    case 0 :  resetPrinter();
              printMessage0();
              Serial.println("0");
              resetPrinter();
              break;
    case 1 :  resetPrinter();
              printMessage1();
              Serial.println("1");
              resetPrinter(); 
              break;
    case 2 :  resetPrinter();
              printMessage2();
              Serial.println("2");
              resetPrinter();
              break; 
    case 3 :  resetPrinter();
              printMessage3();
              Serial.println("3");
              resetPrinter();
              break;   
    case 4 :  resetPrinter();
              printMessage4();
              Serial.println("4");
              resetPrinter();
              break;  
    case 5 :  resetPrinter();
              printMessage5();
              Serial.println("5");
              resetPrinter();
              break;   
    case 6 :  resetPrinter();
              printMessage6();
              Serial.println("6");
              resetPrinter();
              break;  
    case 7 :  resetPrinter();
              printMessage7();
              Serial.println("7");
              resetPrinter();
              break;   
    case 8 :  resetPrinter();
              printMessage8();
              Serial.println("8");
              resetPrinter();
              break;      
    case 9 :  resetPrinter();
              printMessage9();
              Serial.println("9");
              resetPrinter();
              break;                                         
  }
}

void printByte(byte inByte) {
  while(digitalRead(busy) == HIGH) {
    // wait for busy to go low
  }

  int b0 = bitRead(inByte, 0);
  int b1 = bitRead(inByte, 1);
  int b2 = bitRead(inByte, 2);
  int b3 = bitRead(inByte, 3);
  int b4 = bitRead(inByte, 4);
  int b5 = bitRead(inByte, 5);
  int b6 = bitRead(inByte, 6);
  int b7 = bitRead(inByte, 7);

  digitalWrite(data_0, b0);        // set data bit pins
  digitalWrite(data_1, b1);
  digitalWrite(data_2, b2);
  digitalWrite(data_3, b3);
  digitalWrite(data_4, b4);
  digitalWrite(data_5, b5);
  digitalWrite(data_6, b6);
  digitalWrite(data_7, b7);

  digitalWrite(nStrobe, LOW);       // strobe nStrobe to input data bits
  delayMicroseconds(strobeWait);
  digitalWrite(nStrobe, HIGH);

  while(digitalRead(busy) == HIGH) {
    // wait for busy line to go low
  }
}

void resetPrinter() {
  Serial.println("Reseting printer...");
  printByte(27); // reset printer
  printByte('E');
  Serial.println("Printer Reset");
}

void printMessage0() {
  digitalWrite(13, HIGH);
  for(int line = 0; line < num_lines0; line++) { 
    for(int cursorPosition = 0; cursorPosition < charsPerLine0; cursorPosition++) {
    byte character = pgm_read_byte_near(&(message0[line][cursorPosition]));
      printByte(character);
      delay(1);
    }
    printByte(10); // new line
    printByte(13); // carriage return
  }
  digitalWrite(13,LOW);
}

void printMessage1() {
  digitalWrite(13, HIGH);
  for(int line = 0; line < num_lines1; line++) { 
    for(int cursorPosition = 0; cursorPosition < charsPerLine1; cursorPosition++) {
    byte character = pgm_read_byte_near(&(message1[line][cursorPosition]));
      printByte(character);
      delay(1);
    }
    printByte(10); // new line
    printByte(13); // carriage return
  }
  digitalWrite(13,LOW);
}

void printMessage2() {
  digitalWrite(13, HIGH);
  for(int line = 0; line < num_lines2; line++) { 
    for(int cursorPosition = 0; cursorPosition < charsPerLine2; cursorPosition++) {
    byte character = pgm_read_byte_near(&(message2[line][cursorPosition]));
      printByte(character);
      delay(1);
    }
    printByte(10); // new line
    printByte(13); // carriage return
  }
  digitalWrite(13,LOW);
}

void printMessage3() {
  digitalWrite(13, HIGH);
  for(int line = 0; line < num_lines3; line++) { 
    for(int cursorPosition = 0; cursorPosition < charsPerLine3; cursorPosition++) {
    byte character = pgm_read_byte_near(&(message3[line][cursorPosition]));
      printByte(character);
      delay(1);
    }
    printByte(10); // new line
    printByte(13); // carriage return
  }
  digitalWrite(13,LOW);
}

void printMessage4() {
  digitalWrite(13, HIGH);
  for(int line = 0; line < num_lines4; line++) { 
    for(int cursorPosition = 0; cursorPosition < charsPerLine4; cursorPosition++) {
    byte character = pgm_read_byte_near(&(message4[line][cursorPosition]));
      printByte(character);
      delay(1);
    }
    printByte(10); // new line
    printByte(13); // carriage return
  }
  digitalWrite(13,LOW);
}

void printMessage5() {
  digitalWrite(13, HIGH);
  for(int line = 0; line < num_lines5; line++) { 
    for(int cursorPosition = 0; cursorPosition < charsPerLine5; cursorPosition++) {
    byte character = pgm_read_byte_near(&(message5[line][cursorPosition]));
      printByte(character);
      delay(1);
    }
    printByte(10); // new line
    printByte(13); // carriage return
  }
  digitalWrite(13,LOW);
}

void printMessage6() {
  digitalWrite(13, HIGH);
  for(int line = 0; line < num_lines6; line++) { 
    for(int cursorPosition = 0; cursorPosition < charsPerLine6; cursorPosition++) {
    byte character = pgm_read_byte_near(&(message6[line][cursorPosition]));
      printByte(character);
      delay(1);
    }
    printByte(10); // new line
    printByte(13); // carriage return
  }
  digitalWrite(13,LOW);
}

void printMessage7() {
  digitalWrite(13, HIGH);
  for(int line = 0; line < num_lines7; line++) { 
    for(int cursorPosition = 0; cursorPosition < charsPerLine7; cursorPosition++) {
    byte character = pgm_read_byte_near(&(message7[line][cursorPosition]));
      printByte(character);
      delay(1);
    }
    printByte(10); // new line
    printByte(13); // carriage return
  }
  digitalWrite(13,LOW);
}

void printMessage8() {
  digitalWrite(13, HIGH);
  for(int line = 0; line < num_lines8; line++) { 
    for(int cursorPosition = 0; cursorPosition < charsPerLine8; cursorPosition++) {
    byte character = pgm_read_byte_near(&(message8[line][cursorPosition]));
      printByte(character);
      delay(1);
    }
    printByte(10); // new line
    printByte(13); // carriage return
  }
  digitalWrite(13,LOW);
}

void printMessage9() {
  digitalWrite(13, HIGH);
  for(int line = 0; line < num_lines9; line++) { 
    for(int cursorPosition = 0; cursorPosition < charsPerLine9; cursorPosition++) {
    byte character = pgm_read_byte_near(&(message9[line][cursorPosition]));
      printByte(character);
      delay(1);
    }
    printByte(10); // new line
    printByte(13); // carriage return
  }
  digitalWrite(13,LOW);
}


void printStartupMessage() {
  //Serial.println("Print start-up mssage");
  digitalWrite(13, HIGH);
  for(int line = 0; line < startup_num_lines; line++) { 
    for(int cursorPosition = 0; cursorPosition < startup_charsPerLine; cursorPosition++) {
    byte character = pgm_read_byte_near(&(startup_message[line][cursorPosition]));
      printByte(character);
      //      delay(1);
    }
    printByte(10); // new line
    printByte(13); // carriage return
    Serial.print("Line ");
    Serial.print(line);
    Serial.println(" printed.");
  }
  Serial.println("Startup message printed");
  digitalWrite(13,LOW);
}
