void FUN0()
{
    int * data;
    int VAR0[50];
    int VAR1[100];
    data = VAR1;
    {
        int * dataCopy = data;
        int * data = dataCopy;
        {
            int source[100] = {0}; 
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
                    data[i] = source[i];
                }
                printIntLine(data[0]);
            }
        }
    }
}
