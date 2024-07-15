namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = new int64_t;
        *data = 5LL;
        delete data;
    }
    else
    {
        data = new int64_t;
        *data = 5LL;
        delete data;
    }
    if(globalReturnsTrueOrFalse())
    {
        ; 
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
    if(globalReturnsTrueOrFalse())
    {
        data = new int64_t;
        *data = 5LL;
    }
    else
    {
        data = new int64_t;
        *data = 5LL;
    }
    if(globalReturnsTrueOrFalse())
    {
        printLongLongLine(*data);
    }
    else
    {
        printLongLongLine(*data);
    }
}
} 
