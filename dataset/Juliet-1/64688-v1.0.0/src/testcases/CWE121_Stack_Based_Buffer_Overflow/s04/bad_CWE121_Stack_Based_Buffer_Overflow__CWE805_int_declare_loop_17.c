void FUN0()
{
    int i;
    int * data;
    int VAR0[50];
    int VAR1[100];
    for(i = 0; i < 1; i++)
    {
        data = VAR0;
    }
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
