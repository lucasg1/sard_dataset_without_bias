static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    int * data;
    data = NULL;
    if(FUN0())
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
