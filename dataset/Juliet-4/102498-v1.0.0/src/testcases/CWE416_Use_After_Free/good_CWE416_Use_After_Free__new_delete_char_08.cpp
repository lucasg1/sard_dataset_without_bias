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
        *data = 'A';
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
    char * data;
    data = NULL;
    if(FUN0())
    {
        data = new char;
        *data = 'A';
        delete data;
    }
    if(FUN0())
    {
        ; 
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
        data = new char;
        *data = 'A';
    }
    if(FUN0())
    {
        printHexCharLine(*data);
    }
}
void FUN5()
{
    char * data;
    data = NULL;
    if(FUN0())
    {
        data = new char;
        *data = 'A';
    }
    if(FUN0())
    {
        printHexCharLine(*data);
    }
}
} 
