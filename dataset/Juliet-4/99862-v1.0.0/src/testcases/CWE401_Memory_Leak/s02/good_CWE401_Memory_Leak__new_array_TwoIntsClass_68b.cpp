namespace NAMESPACE0
{
TwoIntsClass * VAR1;
TwoIntsClass * VAR2;
TwoIntsClass * VAR3;
void FUN0();
void FUN1();
void FUN2()
{
    TwoIntsClass * data;
    data = NULL;
    TwoIntsClass VAR4[100];
    data = VAR4;
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printIntLine(data[0].intOne);
    printIntLine(data[0].intTwo);
    VAR2 = data;
    FUN0();
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass[100];
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printIntLine(data[0].intOne);
    printIntLine(data[0].intTwo);
    VAR3 = data;
    FUN1();
}
} 
namespace NAMESPACE0
{
extern TwoIntsClass * VAR1;
extern TwoIntsClass * VAR2;
extern TwoIntsClass * VAR3;
void FUN0()
{
    TwoIntsClass * data = VAR2;
    ; 
}
void FUN1()
{
    TwoIntsClass * data = VAR3;
    delete[] data;
}
} 
