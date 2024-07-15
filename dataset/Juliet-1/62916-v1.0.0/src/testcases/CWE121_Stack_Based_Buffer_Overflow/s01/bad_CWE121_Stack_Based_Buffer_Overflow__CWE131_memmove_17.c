void FUN0()
{
    int i;
    int * data;
    data = NULL;
    for(i = 0; i < 1; i++)
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
