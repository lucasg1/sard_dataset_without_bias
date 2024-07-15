void FUN0()
{
    int * data;
    int * VAR0 = (int *)ALLOCA(50*sizeof(int));
    int * VAR1 = (int *)ALLOCA(100*sizeof(int));
    data = VAR1;
    {
        int * dataCopy = data;
        int * data = dataCopy;
        {
            int source[100] = {0}; 
            memcpy(data, source, 100*sizeof(int));
            printIntLine(data[0]);
        }
    }
}
