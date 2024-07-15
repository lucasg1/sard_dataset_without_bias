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
    int * data;
    data = NULL;
    if(FUN0())
    {
        data = new int[100];
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete[] data;
    }
}
void FUN3()
{
    int * data;
    data = NULL;
    if(FUN0())
    {
        data = new int[100];
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(FUN0())
    {
        delete[] data;
    }
}
void FUN4()
{
    int * data;
    data = NULL;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        int VAR1[100];
        data = VAR1;
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(FUN0())
    {
        ; 
    }
}
void FUN5()
{
    int * data;
    data = NULL;
    if(FUN0())
    {
        int VAR1[100];
        data = VAR1;
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(FUN0())
    {
        ; 
    }
}
} 
