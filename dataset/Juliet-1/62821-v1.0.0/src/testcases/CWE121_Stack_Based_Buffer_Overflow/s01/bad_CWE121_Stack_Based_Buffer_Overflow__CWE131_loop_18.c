void FUN0()
{
    int * data;
    data = NULL;
    goto source;
source:
    data = (int *)ALLOCA(10);
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
