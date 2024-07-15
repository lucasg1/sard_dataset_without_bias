namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    int64_t VAR1;
    data = &VAR1;
    *data = 5LL;
    printLongLongLine(*data);
    ; 
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = new int64_t;
    *data = 5LL;
    printLongLongLine(*data);
    delete data;
}
} 
