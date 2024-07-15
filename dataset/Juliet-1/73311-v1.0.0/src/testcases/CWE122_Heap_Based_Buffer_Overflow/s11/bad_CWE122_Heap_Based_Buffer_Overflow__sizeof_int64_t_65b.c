void FUN0(int64_t * data);
void FUN1()
{
    int64_t * data;
    void (*funcPtr) (int64_t *) = FUN0;
    data = NULL;
    data = (int64_t *)malloc(sizeof(data));
    *data = 2147483643LL;
    funcPtr(data);
}
void FUN0(int64_t * data)
{
<START>
    printLongLongLine(*data);
<END>
    free(data);
}
