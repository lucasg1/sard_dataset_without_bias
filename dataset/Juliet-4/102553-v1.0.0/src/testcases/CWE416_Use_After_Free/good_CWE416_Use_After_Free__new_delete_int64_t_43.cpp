namespace NAMESPACE0
{
void FUN0(int64_t * &data)
{
    data = new int64_t;
    *data = 5LL;
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    FUN0(data);
    printLongLongLine(*data);
}
void FUN2(int64_t * &data)
{
    data = new int64_t;
    *data = 5LL;
    delete data;
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    FUN2(data);
    ; 
}
} 
