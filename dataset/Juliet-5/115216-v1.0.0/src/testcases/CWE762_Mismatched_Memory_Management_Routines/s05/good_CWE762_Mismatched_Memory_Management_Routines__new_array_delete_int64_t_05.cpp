static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = new int64_t[100];
    }
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete [] data;
    }
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = new int64_t[100];
    }
    if(staticTrue)
    {
        delete [] data;
    }
}
void FUN2()
{
    int64_t * data;
    data = NULL;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int64_t;
    }
    if(staticTrue)
    {
        delete data;
    }
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = new int64_t;
    }
    if(staticTrue)
    {
        delete data;
    }
}
} 
