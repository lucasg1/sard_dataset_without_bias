void FUN0(long * data)
{
<START>
    printLongLine(*data);
<END>
}
void FUN1()
{
    long * data;
    void (*funcPtr) (long *) = FUN0;
    data = NULL;
    funcPtr(data);
}
