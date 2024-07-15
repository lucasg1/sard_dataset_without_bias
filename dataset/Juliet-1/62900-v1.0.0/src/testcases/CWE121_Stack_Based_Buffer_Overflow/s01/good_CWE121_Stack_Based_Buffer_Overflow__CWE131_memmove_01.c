void FUN0()
{
    int * data;
    data = NULL;
    data = (int *)ALLOCA(10*sizeof(int));
    {
        int source[10] = {0};
        memmove(data, source, 10*sizeof(int));
        printIntLine(data[0]);
    }
}
