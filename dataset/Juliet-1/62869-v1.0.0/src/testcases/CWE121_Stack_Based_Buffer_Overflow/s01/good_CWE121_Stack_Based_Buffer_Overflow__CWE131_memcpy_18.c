void FUN0()
{
    int * data;
    data = NULL;
    goto source;
source:
    data = (int *)ALLOCA(10*sizeof(int));
    {
        int source[10] = {0};
        memcpy(data, source, 10*sizeof(int));
        printIntLine(data[0]);
    }
}
