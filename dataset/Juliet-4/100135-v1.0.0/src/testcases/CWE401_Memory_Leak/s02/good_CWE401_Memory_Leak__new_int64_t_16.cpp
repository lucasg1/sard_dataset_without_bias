namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    while(1)
    {
        data = new int64_t;
        *data = 5LL;
        printLongLongLine(*data);
        break;
    }
    while(1)
    {
        delete data;
        break;
    }
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    while(1)
    {
        int64_t VAR1;
        data = &VAR1;
        *data = 5LL;
        printLongLongLine(*data);
        break;
    }
    while(1)
    {
        ; 
        break;
    }
}
} 
