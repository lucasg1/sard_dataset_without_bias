void FUN0()
{
    int count;
    count = -1;
    if(globalReturnsTrue())
    {
        count = RAND32();
    }
    if(globalReturnsFalse())
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
void FUN1()
{
    int count;
    count = -1;
    if(globalReturnsTrue())
    {
        count = RAND32();
    }
    if(globalReturnsTrue())
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
void FUN2()
{
    int count;
    count = -1;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        count = 20;
    }
    if(globalReturnsTrue())
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
void FUN3()
{
    int count;
    count = -1;
    if(globalReturnsTrue())
    {
        count = 20;
    }
    if(globalReturnsTrue())
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
