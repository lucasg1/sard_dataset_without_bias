void FUN0(int count);
void FUN1(int count)
{
    FUN0(count);
}
void FUN2(int count);
void FUN3(int count)
{
    FUN2(count);
}
void FUN4(int count);
void FUN5()
{
    int count;
    count = -1;
    count = 20;
    FUN4(count);
}
void FUN6(int count);
void FUN7()
{
    int count;
    count = -1;
    count = RAND32();
    FUN6(count);
}
void FUN1(int count);
void FUN4(int count)
{
    FUN1(count);
}
void FUN3(int count);
void FUN6(int count)
{
    FUN3(count);
}
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
