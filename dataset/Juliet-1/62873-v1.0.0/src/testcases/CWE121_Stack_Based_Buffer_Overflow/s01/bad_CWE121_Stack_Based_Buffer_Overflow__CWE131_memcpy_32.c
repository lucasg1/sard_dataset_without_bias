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
<START>
            memcpy(data, source, 10*sizeof(int));
<END>
            printIntLine(data[0]);
        }
    }
}
