static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(staticTrue)
    {
        data = new char;
        *data = 'A';
        printHexCharLine(*data);
    }
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete data;
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    if(staticTrue)
    {
        data = new char;
        *data = 'A';
        printHexCharLine(*data);
    }
    if(staticTrue)
    {
        delete data;
    }
}
void FUN2()
{
    char * data;
    data = NULL;
    if(staticFalse)
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
    if(staticTrue)
    {
        ; 
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(staticTrue)
    {
        char VAR1;
        data = &VAR1;
        *data = 'A';
        printHexCharLine(*data);
    }
    if(staticTrue)
    {
        ; 
    }
}
} 
