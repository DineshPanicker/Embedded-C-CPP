/* Aim is to make a function in C similar to bitset class in C++
Given below definition of std::bitset, provide similar functionality in C

class bitset::reference {
  friend class bitset;
  reference() noexcept;                               // no public constructor
public:
  ~reference();
  operator bool() const noexcept;                     // convert to bool
  reference& operator= (bool x) noexcept;             // assign bool
  reference& operator= (const reference& x) noexcept; // assign bit
  reference& flip() noexcept;                         // flip bit value
  bool operator~() const noexcept;                    // return inverse value
}

constexpr std::bitset<4> b1;
constexpr std::bitset<4> b2{0xA}; // == 0B1010

bitset<n> b1(num);
num= 0xA
b1[0] = 0
b1[1] =1
//1010
b[1] = 0
1000
*/
#include <stdio.h>

typedef struct
{
    unsigned int value;
    int numBits;
} Bitset;

Bitset createBitset(unsigned int num)
{
    Bitset bs;
    bs.value = num;
    bs.numBits = sizeof(num) * 8;
    return bs;
}

void printBitset(const Bitset bs)
{
    printf("Decimal: %u\n", bs.value);
    printf("Hexadecimal: 0x%x\n", bs.value);

    printf("Binary: ");
    for (int i = bs.numBits - 1; i >= 0; i--)
    {
        int bit = (bs.value >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main()
{
    unsigned int number;
    printf("Enter a number: ");
    scanf("%u", &number);

    Bitset bs = createBitset(number);
    printBitset(bs);

    return 0;
}
