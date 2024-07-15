namespace NAMESPACE0
{
void FUN0(long * data)
{
<START>
    free(data);
<END>
}
void FUN1()
{
    long * data;
    void (*funcPtr) (long *) = FUN0;
    data = NULL;
    data = new long;
    funcPtr(data);
}
} 
