void FUN0()
{
    int * data;
    int * *dataPtr1 = &data;
    int * *dataPtr2 = &data;
    int * VAR0 = (int *)ALLOCA(50*sizeof(int));
    int * VAR1 = (int *)ALLOCA(100*sizeof(int));
    {
        int * data = *dataPtr1;
        data = VAR0;
        *dataPtr1 = data;
    }
    {
        int * data = *dataPtr2;
        {
            int source[100] = {0}; 
<START>
            memmove(data, source, 100*sizeof(int));
<END>
            printIntLine(data[0]);
        }
    }
}
