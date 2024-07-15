void FUN0()
{
    int * data;
    int VAR0[50];
    int VAR1[100];
    data = VAR0;
    {
        int * dataCopy = data;
        int * data = dataCopy;
        {
            int source[100] = {0}; 
<START>
            memmove(data, source, 100*sizeof(int));
<END>
            printIntLine(data[0]);
        }
    }
}
