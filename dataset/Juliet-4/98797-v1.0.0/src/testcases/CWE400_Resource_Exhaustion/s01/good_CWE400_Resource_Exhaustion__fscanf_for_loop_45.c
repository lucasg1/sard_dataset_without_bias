static int VAR0;
static int VAR1;
static int VAR2;
void FUN0()
{
    int count = VAR1;
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
    count = -1;
    count = 20;
    VAR1 = count;
    FUN0();
}
void FUN2()
{
    int count = VAR2;
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
    count = -1;
    fscanf(stdin, "%d", &count);
    VAR2 = count;
    FUN2();
}
