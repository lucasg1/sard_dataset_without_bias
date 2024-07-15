static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
namespace NAMESPACE0
{
void FUN2()
{
    twoIntsStruct * data;
    data = NULL;
    if(FUN0())
    {
        data = new twoIntsStruct;
        delete data;
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ; 
    }
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    if(FUN0())
    {
        data = new twoIntsStruct;
        delete data;
    }
    if(FUN0())
    {
        ; 
    }
}
void FUN4()
{
    twoIntsStruct * data;
    data = NULL;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new twoIntsStruct;
    }
    if(FUN0())
    {
        delete data;
    }
}
void FUN5()
{
    twoIntsStruct * data;
    data = NULL;
    if(FUN0())
    {
        data = new twoIntsStruct;
    }
    if(FUN0())
    {
        delete data;
    }
}
} 
