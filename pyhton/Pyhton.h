#pragma once
#ifndef PYHTON_H
#define PYHTON_H

//Sl
#define SL_LENGTH 2000
#define SL_HEIGHT 12
#define SL_PATTERNS 6

#define SL1 "        ====                      ___________  "
#define SL2 "    )=|_| |__     ____     ====   |         |  "
#define SL3 "    |        |__H/  ||____|   |_=_|  [^o^]  |  "
#define SL4 "    |        | []     ---    ----- [C56 150]|_ "
#define SL5 "    |        | []      H      ---             |"
#define SL6 "    |        | []      H       -       [  ]   |"
#define SL7 "    |        |_[]______H_______-_______[__]___|"


#define SLWHL11 "    | _______| _      ____      ____      ____  "
#define SLWHL12 "    |/  |  A    A    A    A    A    A    A    A "
#define SLWHL13 "    /___| |0=========0=========0=========0  X  |"
#define SLWHL14 "   /       V____V    V____V    V____V    V____V "

#define SLWHL21 "    | _______| _      ____      ____      ____  "
#define SLWHL22 "    |/  |  A    A    A    A    A    A    A    A "
#define SLWHL23 "    /___| |   X  |  |   X  |  |   X  |  |   X  |"
#define SLWHL24 "   /       V0=========0=========0=========0___V "


#define SLWHL31 "    | _______| _      ____      ____      ____  "
#define SLWHL32 "    |/  |  A    A    A    A    A    A    A    A "
#define SLWHL33 "    /___| |   X  |  |   X  |  |   X  |  |   X  |"
#define SLWHL34 "   /       V____0=========0=========0=========0 "


#define SLWHL41 "    | _______| _      ____      ____      ____  "
#define SLWHL42 "    |/  |  A    A    A    A    A    A    A    A "
#define SLWHL43 "    /___| |   X  0=========0=========0=========0 "
#define SLWHL44 "   /       V____V    V____V    V____V    V____V "

#define SLWHL51 "    | _______| _      ____      ____      ____  "
#define SLWHL52 "    |/  |  A    0=========0=========0=========0 "
#define SLWHL53 "    /___| |   X  |  |   X  |  |   X  |  |   X  |"
#define SLWHL54 "   /       V____V    V____V    V____V    V____V "

#define SLWHL61 "    | _______| _      ____      ____      ____  "
#define SLWHL62 "    |/  |  0=========0=========0=========0    A "
#define SLWHL63 "    /___| |   X  |  |   X  |  |   X  |  |   X  |"
#define SLWHL64 "   /       V____V    V____V    V____V    V____V "


#define TENDER01 "         @@@@@@@@@@@@@@@@@    @      "
#define TENDER02 "     ___@@@@@@@@@@@@@@@@@@@@@@@@@@_  "
#define TENDER03 "    _|                            |  "
#define TENDER04 "   |                              |  "
#define TENDER05 "===                               |  "
#define TENDER06 " _|                               |_ "
#define TENDER07 "|                                  | "
#define TENDER08 "|_________________________________|  "
#define TENDER09 "     A    A               A    A     "
#define TENDER10 "    |   X  |             |   X  |    "
#define TENDER11 "     V____V               V____V     "

/**
*Function definition
*
*If there's a feature you'd like to add, please add it here.
*
*/



//function name start [a] or [A]
void Add();

//function name start [b] or [B]
void Bug();

//function name start [c] or [C]
void Check_Argument(int a,char* str[]);
void Check_Command(char* c,bool flag);
void Clear_Console();

//function name start [d] or [D]



//function name start [e] or [E]

//function name start [f] or [F]

//function name start [g] or [G]

//function name start [h] or [H]
void Hello();
//function name start [i] or [I]
//function name start [j] or [J]
//function name start [k] or [K]
//function name start [l] or [L]
//function name start [m] or [M]
//function name start [n] or [N]
//function name start [o] or [O]
//function name start [p] or [P]
void Python_function();
void Pyhton_function();
void Pyhton_Starting(void);
void Pyhton_Exit();
void Print_Help();
void Print_sl();
void PrintVer();

//function name start [q] or [P]
//function name start [r] or [R]
//function name start [s] or [S]
//function name start [t] or [T]
//function name start [u] or [U]
//function name start [v] or [V]
//function name start [w] or [W]
//function name start [x] or [X]
//function name start [y] or [Y]
//function name start [z] or [Z]
#endif