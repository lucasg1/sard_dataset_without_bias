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
void FUN0(int count)
{
    FUN4(count);
}
void FUN6(int count);
void FUN2(int count)
{
    FUN6(count);
}
void FUN8(int count);
void FUN4(int count)
{
    FUN8(count);
}
void FUN10(int count);
void FUN6(int count)
{
    FUN10(count);
}
void FUN1(int count);
void FUN13()
{
    int count;
    count = -1;
    count = 20;
    FUN1(count);
}
void FUN3(int count);
void FUN15()
{
    int count;
    count = -1;
    fscanf(stdin, "%d", &count);
    FUN3(count);
}
void FUN8(int count)
{
    {
        size_t i = 0;
        for (i = 0; i < (size_t)count; i++)
        {
            printLine("Hello");
        }
    }
}
void FUN10(int count)
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
