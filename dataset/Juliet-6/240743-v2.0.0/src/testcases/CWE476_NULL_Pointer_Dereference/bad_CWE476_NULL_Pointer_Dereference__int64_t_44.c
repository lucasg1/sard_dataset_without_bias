void FUN0(int64_t * data)
{
<START>
    printLongLongLine(*data);
<END>
}
void FUN1()
{
    int64_t * data;
    void (*funcPtr) (int64_t *) = FUN0;
    data = NULL;
    funcPtr(data);
}
