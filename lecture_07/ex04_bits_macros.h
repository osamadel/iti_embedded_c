#define MASK(bits) (1 << bits)
#define SET_BIT(var,bit) var | MASK(bit)
#define CLR_BIT(var, bit) var & ~MASK(bit)
#define TOGGLE_BIT(var, bit) var ^ MASK(bit)

// #define Y() X();printf("s")
// #define X() y();printf("z")