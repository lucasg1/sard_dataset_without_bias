void FUN0()
{
    int * data;
    data = NULL;
    data = (int *)ALLOCA(10*sizeof(int));
    {
        int * dataCopy = data;
        int * data = dataCopy;
        {
            int source[10] = {0};
            memcpy(data, source, 10*sizeof(int));
            printIntLine(data[0]);
        }
    }
}
