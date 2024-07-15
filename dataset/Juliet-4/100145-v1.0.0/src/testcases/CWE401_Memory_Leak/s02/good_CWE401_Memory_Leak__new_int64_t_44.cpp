namespace NAMESPACE0
{
void FUN0(int64_t * data)
{
    ; 
}
void FUN1()
{
    int64_t * data;
    void (*funcPtr) (int64_t *) = FUN0;
    data = NULL;
    int64_t VAR1;
    data = &VAR1;
    *data = 5LL;
    printLongLongLine(*data);
    funcPtr(data);
}
void FUN2(int64_t * data)
{
    delete data;
}
void FUN3()
{
    int64_t * data;
    void (*funcPtr) (int64_t *) = FUN2;
    data = NULL;
    data = new int64_t;
    *data = 5LL;
    printLongLongLine(*data);
    funcPtr(data);
}
} 
