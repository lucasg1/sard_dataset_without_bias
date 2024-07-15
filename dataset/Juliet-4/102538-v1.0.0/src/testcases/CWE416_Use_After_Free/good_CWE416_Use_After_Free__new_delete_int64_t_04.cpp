static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new int64_t;
        *data = 5LL;
        delete data;
    }
    if(STATIC_CONST_FALSE)
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
    if(STATIC_CONST_TRUE)
    {
        data = new int64_t;
        *data = 5LL;
        delete data;
    }
    if(STATIC_CONST_TRUE)
    {
        ; 
    }
}
void FUN2()
{
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int64_t;
        *data = 5LL;
    }
    if(STATIC_CONST_TRUE)
    {
        printLongLongLine(*data);
    }
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new int64_t;
        *data = 5LL;
    }
    if(STATIC_CONST_TRUE)
    {
        printLongLongLine(*data);
    }
}
} 
