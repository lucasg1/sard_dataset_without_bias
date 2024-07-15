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
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
<START>
                    data[i] = source[i];
<END>
                }
                printIntLine(data[0]);
            }
        }
    }
}
