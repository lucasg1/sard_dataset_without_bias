static int staticFive = 5;
void FUN0()
{
    int count;
    count = -1;
    if(staticFive==5)
    {
        count = RAND32();
    }
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        count = RAND32();
    }
    if(staticFive==5)
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
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        count = 20;
    }
    if(staticFive==5)
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
    if(staticFive==5)
    {
        count = 20;
    }
    if(staticFive==5)
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
