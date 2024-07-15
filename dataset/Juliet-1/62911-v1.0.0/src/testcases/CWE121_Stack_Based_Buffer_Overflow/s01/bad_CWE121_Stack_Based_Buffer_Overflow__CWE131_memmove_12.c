void FUN0()
{
    int * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (int *)ALLOCA(10);
    }
    else
    {
        data = (int *)ALLOCA(10*sizeof(int));
    }
    {
        int source[10] = {0};
<START>
        memmove(data, source, 10*sizeof(int));
<END>
        printIntLine(data[0]);
    }
}
