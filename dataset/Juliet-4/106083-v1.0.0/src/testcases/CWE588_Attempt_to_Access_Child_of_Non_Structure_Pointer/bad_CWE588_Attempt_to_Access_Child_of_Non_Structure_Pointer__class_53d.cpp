namespace NAMESPACE0
{
void FUN0(void * data);
void FUN1(void * data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN2(void * data);
void FUN3()
{
    void * data;
    TwoIntsClass VAR2;
    int VAR3 = 100;
    VAR2.intOne = 0;
    VAR2.intTwo = 0;
    data = &VAR3;
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(void * data);
void FUN2(void * data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN0(void * data)
{
<START>
    printIntLine((reinterpret_cast<TwoIntsClass *>(data))->intTwo);
<END>
}
} 
