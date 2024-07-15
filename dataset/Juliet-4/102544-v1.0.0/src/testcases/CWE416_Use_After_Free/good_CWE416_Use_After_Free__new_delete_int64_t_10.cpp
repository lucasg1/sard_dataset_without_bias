namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = new int64_t;
        *data = 5LL;
        delete data;
    }
    if(globalFalse)
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
    if(globalTrue)
    {
        data = new int64_t;
        *data = 5LL;
        delete data;
    }
    if(globalTrue)
    {
        ; 
    }
}
void FUN2()
{
    int64_t * data;
    data = NULL;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int64_t;
        *data = 5LL;
    }
    if(globalTrue)
    {
        printLongLongLine(*data);
    }
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = new int64_t;
        *data = 5LL;
    }
    if(globalTrue)
    {
        printLongLongLine(*data);
    }
}
} 
