void FUN0()
{
    int * data;
    data = NULL;
    data = (int *)ALLOCA(10*sizeof(int));
    {
        int source[10] = {0};
        size_t i;
        for (i = 0; i < 10; i++)
        {
            data[i] = source[i];
        }
        printIntLine(data[0]);
    }
}
