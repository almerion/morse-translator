#define Am ".-"
#define Bm "-..."
#define Cm "-.-."
#define Dm "-.."
#define Em '.'
#define Fm "..-."
#define Gm "--."
#define Hm "...."
#define Im ".."
#define Jm ".---"
#define Km "-.-"
#define Lm ".-.."
#define Mm "--"
#define Nm "-."
#define Om "---"
#define Pm ".--."
#define Qm "--.-"
#define Rm ".-."
#define Sm "..."
#define Tm '-'
#define Um "..-"
#define Vm "...-"
#define Wm ".--" 
#define Xm "-..-"
#define Ym "-.--"
#define Zm "--.."
#define ONEm ".----"
#define TWOm "..---"
#define THEm "...--"
#define FOUm "....-"
#define FIVm "....."
#define SIXm "-...."
#define SEVm "--..."
#define EIGm "---.."
#define NINm "----."
#define ZERm "-----"
#define DBLANKm "  "

#define BUFFER_SIZE 10000

void convert(char textinput[]);
int popmorsecode(char s[]);
int printmorsecode(void);

extern int bufposition = 0;
extern char buf[BUFFER_SIZE]; 
