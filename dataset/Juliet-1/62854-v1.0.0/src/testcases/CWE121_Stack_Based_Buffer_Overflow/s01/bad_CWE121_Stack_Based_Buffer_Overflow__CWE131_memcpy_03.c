void FUN0()
{
    int * data;
    data = NULL;
    if(5==5)
    {
        data = (int *)ALLOCA(10);
    }
    {
        int source[10] = {0};
<START>
        memcpy(data, source, 10*sizeof(int));
<END>
        printIntLine(data[0]);
    }
}
