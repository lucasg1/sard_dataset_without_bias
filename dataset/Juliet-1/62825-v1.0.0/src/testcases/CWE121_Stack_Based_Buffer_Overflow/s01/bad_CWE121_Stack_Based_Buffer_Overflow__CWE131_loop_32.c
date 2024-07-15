void FUN0()
{
    int * data;
    int * *dataPtr1 = &data;
    int * *dataPtr2 = &data;
    data = NULL;
    {
        int * data = *dataPtr1;
        data = (int *)ALLOCA(10);
        *dataPtr1 = data;
    }
    {
        int * data = *dataPtr2;
        {
            int source[10] = {0};
            size_t i;
            for (i = 0; i < 10; i++)
            {
<START>
                data[i] = source[i];
<END>
            }
            printIntLine(data[0]);
        }
    }
}
