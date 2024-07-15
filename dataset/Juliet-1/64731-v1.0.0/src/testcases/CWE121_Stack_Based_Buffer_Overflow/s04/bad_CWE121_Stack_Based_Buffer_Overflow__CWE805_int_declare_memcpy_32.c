void FUN0()
{
    int * data;
    int * *dataPtr1 = &data;
    int * *dataPtr2 = &data;
    int VAR0[50];
    int VAR1[100];
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
            memcpy(data, source, 100*sizeof(int));
<END>
            printIntLine(data[0]);
        }
    }
}
