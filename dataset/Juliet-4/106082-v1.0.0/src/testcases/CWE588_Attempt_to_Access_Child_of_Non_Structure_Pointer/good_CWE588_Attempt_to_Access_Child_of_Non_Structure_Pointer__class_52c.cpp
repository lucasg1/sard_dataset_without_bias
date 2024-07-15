namespace NAMESPACE0
{
void FUN0(void * data);
void FUN1()
{
    void * data;
    TwoIntsClass VAR1;
    int VAR2 = 100;
    VAR1.intOne = 0;
    VAR1.intTwo = 0;
    data = &VAR1;
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN3(void * data);
void FUN0(void * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN3(void * data)
{
    printIntLine((reinterpret_cast<TwoIntsClass *>(data))->intTwo);
}
} 
