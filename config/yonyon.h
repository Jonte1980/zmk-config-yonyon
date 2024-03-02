// clang-format off

// LAYERS
#define QWERTY 0
#define LOWER 1
#define RAISE 2
#define NAV 3
#define NUM 4
#define FUNC 5
#define ADJUST 6

// CUSTOM KEY CODES
#define XXX &none
#define ___ &trans

#define YANK   &kp LC(INS)
#define PASTE  &kp LS(INS)
#define KUT    &kp LC(X)
#define SEL_A  &kp LC(A)

#define C_ESC  &mt LCTRL ESC
#define BS_LOW &lt LOWER BSPC
#define ENT_RS &lt RAISE ENTER
#define SPCNAV &lt NAV SPACE
#define TABNUM &lt NUM TAB
#define TABNAV &lt NAV TAB
#define TABFNC &lt FUNC TAB

#define CLOSE  &kp LA(F4)       // ALT + F4
#define CAD    &kp LC(LA(DEL))  // CTRL + ALT + DEL

#define MEH      LC(LS(LALT))
#define TAB_PREV LC(PG_UP)
#define TAB_NEXT LC(PG_DN)

// clang-format on
