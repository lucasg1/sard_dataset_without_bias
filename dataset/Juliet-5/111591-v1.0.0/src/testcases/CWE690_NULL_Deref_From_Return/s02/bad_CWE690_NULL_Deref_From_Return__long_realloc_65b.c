void FUN0(long * data);
void FUN1()
{
    long * data;
    void (*funcPtr) (long *) = FUN0;
    data = NULL; 
    data = (long *)realloc(data, 1*sizeof(long));
    funcPtr(data);
}
void FUN0(long * data)
{
<START>
    data[0] = 5L;
<END>
    printLongLine(data[0]);
    free(data);
}
