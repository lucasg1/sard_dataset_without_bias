int FUN0(int count)
{
    count = 20;
    return count;
}
int FUN1(int count)
{
    count = RAND32();
    return count;
}
int FUN0(int count);
void FUN3()
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
int FUN1(int count);
void FUN5()
{
    int count;
    count = -1;
    count = FUN1(count);
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
