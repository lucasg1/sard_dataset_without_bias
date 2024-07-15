void FUN0()
{
    int * data;
    data = NULL;
    while(1)
    {
        data = (int *)ALLOCA(10);
        break;
    }
    {
        int source[10] = {0};
<START>
        memmove(data, source, 10*sizeof(int));
<END>
        printIntLine(data[0]);
    }
}
