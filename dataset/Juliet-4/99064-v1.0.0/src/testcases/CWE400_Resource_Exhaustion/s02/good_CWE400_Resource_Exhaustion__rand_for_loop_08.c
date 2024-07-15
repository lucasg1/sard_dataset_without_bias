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
        count = RAND32();
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
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
}
void FUN3()
{
    int count;
    count = -1;
    if(FUN0())
    {
        count = RAND32();
    }
    if(FUN0())
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
}
void FUN4()
{
    int count;
    count = -1;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        count = 20;
    }
    if(FUN0())
    {
        {
            size_t i = 0;
            for (i = 0; i < (size_t)count; i++)
            {
                printLine("Hello");
            }
        }
    }
}
void FUN5()
{
    int count;
    count = -1;
    if(FUN0())
    {
        count = 20;
    }
    if(FUN0())
    {
        {
            size_t i = 0;
            for (i = 0; i < (size_t)count; i++)
            {
                printLine("Hello");
            }
        }
    }
}
