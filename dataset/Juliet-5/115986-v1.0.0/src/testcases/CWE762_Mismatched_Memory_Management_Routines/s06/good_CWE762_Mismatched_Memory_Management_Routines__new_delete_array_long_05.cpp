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
    long * data;
    data = NULL;
    if(staticTrue)
    {
        data = new long;
    }
    if(staticTrue)
    {
        delete data;
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
        data = new long[100];
    }
    if(staticTrue)
    {
        delete [] data;
    }
}
void FUN3()
{
    long * data;
    data = NULL;
    if(staticTrue)
    {
        data = new long[100];
    }
    if(staticTrue)
    {
        delete [] data;
    }
}
} 
