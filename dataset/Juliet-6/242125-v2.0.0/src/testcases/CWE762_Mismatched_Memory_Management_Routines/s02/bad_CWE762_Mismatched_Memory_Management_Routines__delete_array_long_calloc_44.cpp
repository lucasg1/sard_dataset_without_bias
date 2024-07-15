namespace NAMESPACE0
{
void FUN0(long * data)
{
<START>
    delete [] data;
<END>
}
void FUN1()
{
    long * data;
    void (*funcPtr) (long *) = FUN0;
    data = NULL;
    data = (long *)calloc(100, sizeof(long));
    if (data == NULL) {exit(-1);}
    funcPtr(data);
}
} 
