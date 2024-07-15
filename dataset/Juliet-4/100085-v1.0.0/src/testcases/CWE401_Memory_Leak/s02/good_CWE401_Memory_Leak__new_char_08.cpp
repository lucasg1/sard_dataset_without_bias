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
        printHexCharLine(*data);
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
        *data = 'A';
        printHexCharLine(*data);
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
        char VAR1;
        data = &VAR1;
        *data = 'A';
        printHexCharLine(*data);
    }
    if(FUN0())
    {
        ; 
    }
}
void FUN5()
{
    char * data;
    data = NULL;
    if(FUN0())
    {
        char VAR1;
        data = &VAR1;
        *data = 'A';
        printHexCharLine(*data);
    }
    if(FUN0())
    {
        ; 
    }
}
} 
