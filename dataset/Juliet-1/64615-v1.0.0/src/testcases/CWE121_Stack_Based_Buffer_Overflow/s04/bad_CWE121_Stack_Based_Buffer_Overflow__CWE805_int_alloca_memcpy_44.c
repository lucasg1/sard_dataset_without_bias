void FUN0(int * data)
{
    {
        int source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int));
        printIntLine(data[0]);
    }
}
void FUN1()
{
    int * data;
    void (*funcPtr) (int *) = FUN0;
    int * VAR0 = (int *)ALLOCA(50*sizeof(int));
    int * VAR1 = (int *)ALLOCA(100*sizeof(int));
<START>
    data = VAR0;
<END>
    funcPtr(data);
}
