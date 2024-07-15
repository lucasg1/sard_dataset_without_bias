void * VAR0;
void * VAR1;
namespace NAMESPACE2
{
void FUN0();
void FUN1()
{
    void * data;
    TwoIntsClass VAR3;
    int VAR4 = 100;
    VAR3.intOne = 0;
    VAR3.intTwo = 0;
    data = &VAR3;
    VAR1 = data;
    FUN0();
}
} 
extern void * VAR0;
extern void * VAR1;
namespace NAMESPACE2
{
void FUN0()
{
    void * data = VAR1;
    printIntLine((reinterpret_cast<TwoIntsClass *>(data))->intTwo);
}
} 
