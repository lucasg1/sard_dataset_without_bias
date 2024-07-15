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
        printLongLongLine(*data);
    }
    else
    {
        data = new int64_t;
        *data = 5LL;
        printLongLongLine(*data);
    }
    if(globalReturnsTrueOrFalse())
    {
        delete data;
    }
    else
    {
        delete data;
    }
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        int64_t VAR1;
        data = &VAR1;
        *data = 5LL;
        printLongLongLine(*data);
    }
    else
    {
        int64_t VAR1;
        data = &VAR1;
        *data = 5LL;
        printLongLongLine(*data);
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
} 
