void FUN0(int * data)
{
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
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)ALLOCA(10);
    FUN0(data);
}
