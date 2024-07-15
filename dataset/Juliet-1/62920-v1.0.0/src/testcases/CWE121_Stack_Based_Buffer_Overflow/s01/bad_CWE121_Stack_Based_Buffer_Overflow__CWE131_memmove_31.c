void FUN0()
{
    int * data;
    data = NULL;
    data = (int *)ALLOCA(10);
    {
        int * dataCopy = data;
        int * data = dataCopy;
        {
            int source[10] = {0};
<START>
            memmove(data, source, 10*sizeof(int));
<END>
            printIntLine(data[0]);
        }
    }
}
