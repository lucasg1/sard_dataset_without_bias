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
        data = new int64_t;
        *data = 5LL;
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
    int64_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = new int64_t;
        *data = 5LL;
        delete data;
    }
    if(staticTrue)
    {
        ; 
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
        *data = 5LL;
    }
    if(staticTrue)
    {
        printLongLongLine(*data);
    }
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = new int64_t;
        *data = 5LL;
    }
    if(staticTrue)
    {
        printLongLongLine(*data);
    }
}
} 
