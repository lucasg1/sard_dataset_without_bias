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
    int count;
    count = -1;
    if(FUN0())
    {
        fscanf(stdin, "%d", &count);
    }
    if(FUN0())
    {
        {
            size_t i = 0;
<START>
            for (i = 0; i < (size_t)count; i++)
<END>
            {
                printLine("Hello");
            }
        }
    }
}
