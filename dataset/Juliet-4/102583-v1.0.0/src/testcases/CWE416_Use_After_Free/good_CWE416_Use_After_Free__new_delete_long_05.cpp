static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(staticTrue)
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ; 
    }
}
void FUN1()
{
    long * data;
    data = NULL;
    if(staticTrue)
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(staticTrue)
    {
        ; 
    }
}
void FUN2()
{
    long * data;
    data = NULL;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new long;
        *data = 5L;
    }
    if(staticTrue)
    {
        printLongLine(*data);
    }
}
void FUN3()
{
    long * data;
    data = NULL;
    if(staticTrue)
    {
        data = new long;
        *data = 5L;
    }
    if(staticTrue)
    {
        printLongLine(*data);
    }
}
} 
