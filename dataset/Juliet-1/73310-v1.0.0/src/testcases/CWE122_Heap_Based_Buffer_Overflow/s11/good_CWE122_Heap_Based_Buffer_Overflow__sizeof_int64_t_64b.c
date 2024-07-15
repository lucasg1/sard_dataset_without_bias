void FUN0(void * dataVoidPtr);
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(sizeof(*data));
    *data = 2147483643LL;
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    int64_t * * dataPtr = (int64_t * *)dataVoidPtr;
    int64_t * data = (*dataPtr);
    printLongLongLine(*data);
    free(data);
}
