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
    data = &VAR2;
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN5(void * data);
void FUN0(void * data)
{
    FUN5(data);
}
} 
namespace NAMESPACE0
{
void FUN7(void * data);
void FUN5(void * data)
{
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN7(void * data)
{
    printIntLine((reinterpret_cast<TwoIntsClass *>(data))->intTwo);
}
} 
