void FUN0()
{
    int * data;
    int * *dataPtr1 = &data;
    int * *dataPtr2 = &data;
    int * VAR0 = (int *)ALLOCA(50*sizeof(int));
    int * VAR1 = (int *)ALLOCA(100*sizeof(int));
    {
        int * data = *dataPtr1;
        data = VAR1;
        *dataPtr1 = data;
    }
    {
        int * data = *dataPtr2;
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
