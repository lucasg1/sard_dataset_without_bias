static int FUN0(int count)
{
    count = 20;
    return count;
}
void FUN1()
{
    int count;
    count = -1;
    count = FUN0(count);
    {
        size_t i = 0;
        for (i = 0; i < (size_t)count; i++)
        {
            printLine("Hello");
        }
    }
}
static int FUN2(int count)
{
    count = RAND32();
    return count;
}
void FUN3()
{
    int count;
    count = -1;
    count = FUN2(count);
    {
        size_t i = 0;
        if (count > 0 && count <= 20)
        {
            for (i = 0; i < (size_t)count; i++)
            {
                printLine("Hello");
            }
        }
    }
}
