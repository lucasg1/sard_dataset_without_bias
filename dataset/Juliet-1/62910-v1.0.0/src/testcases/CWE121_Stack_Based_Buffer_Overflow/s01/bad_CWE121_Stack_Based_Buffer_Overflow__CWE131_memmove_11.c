void FUN0()
{
    int * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (int *)ALLOCA(10);
    }
    {
        int source[10] = {0};
<START>
        memmove(data, source, 10*sizeof(int));
<END>
        printIntLine(data[0]);
    }
}
