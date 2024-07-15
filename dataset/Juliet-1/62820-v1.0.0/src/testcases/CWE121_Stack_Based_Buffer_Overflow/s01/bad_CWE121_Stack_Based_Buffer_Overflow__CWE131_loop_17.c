void FUN0()
{
    int i;
    int * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = (int *)ALLOCA(10);
    }
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
