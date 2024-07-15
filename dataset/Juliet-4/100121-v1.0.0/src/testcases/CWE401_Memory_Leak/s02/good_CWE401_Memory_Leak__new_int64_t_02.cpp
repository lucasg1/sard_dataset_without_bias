namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(1)
    {
        data = new int64_t;
        *data = 5LL;
        printLongLongLine(*data);
    }
    if(0)
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
    int64_t * data;
    data = NULL;
    if(1)
    {
        data = new int64_t;
        *data = 5LL;
        printLongLongLine(*data);
    }
    if(1)
    {
        delete data;
    }
}
void FUN2()
{
    int64_t * data;
    data = NULL;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        int64_t VAR1;
        data = &VAR1;
        *data = 5LL;
        printLongLongLine(*data);
    }
    if(1)
    {
        ; 
    }
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    if(1)
    {
        int64_t VAR1;
        data = &VAR1;
        *data = 5LL;
        printLongLongLine(*data);
    }
    if(1)
    {
        ; 
    }
}
} 
