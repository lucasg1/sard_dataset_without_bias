void FUN0(int count)
{
    {
        size_t i = 0;
        for (i = 0; i < (size_t)count; i++)
        {
            printLine("Hello");
        }
    }
}
void FUN1()
{
    int count;
    void (*funcPtr) (int) = FUN0;
    count = -1;
    count = 20;
    funcPtr(count);
}
void FUN2(int count)
{
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
void FUN3()
{
    int count;
    void (*funcPtr) (int) = FUN2;
    count = -1;
    count = RAND32();
    funcPtr(count);
}
