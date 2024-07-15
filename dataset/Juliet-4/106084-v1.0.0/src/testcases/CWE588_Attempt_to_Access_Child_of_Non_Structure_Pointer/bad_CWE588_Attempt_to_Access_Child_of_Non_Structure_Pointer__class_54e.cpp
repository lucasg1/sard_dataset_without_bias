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
void FUN1(void * data);
void FUN3()
{
    void * data;
    TwoIntsClass VAR2;
    int VAR3 = 100;
    VAR2.intOne = 0;
    VAR2.intTwo = 0;
    data = &VAR3;
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN4(void * data);
void FUN0(void * data)
{
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN6(void * data);
void FUN4(void * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN6(void * data)
{
<START>
    printIntLine((reinterpret_cast<TwoIntsClass *>(data))->intTwo);
<END>
}
} 
