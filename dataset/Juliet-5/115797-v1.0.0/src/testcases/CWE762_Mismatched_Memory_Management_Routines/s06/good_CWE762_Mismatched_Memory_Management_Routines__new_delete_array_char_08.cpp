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
    char * data;
    data = NULL;
    if(FUN0())
    {
        data = new char;
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete data;
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(FUN0())
    {
        data = new char;
    }
    if(FUN0())
    {
        delete data;
    }
}
void FUN4()
{
    char * data;
    data = NULL;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char[100];
    }
    if(FUN0())
    {
        delete [] data;
    }
}
void FUN5()
{
    char * data;
    data = NULL;
    if(FUN0())
    {
        data = new char[100];
    }
    if(FUN0())
    {
        delete [] data;
    }
}
} 
