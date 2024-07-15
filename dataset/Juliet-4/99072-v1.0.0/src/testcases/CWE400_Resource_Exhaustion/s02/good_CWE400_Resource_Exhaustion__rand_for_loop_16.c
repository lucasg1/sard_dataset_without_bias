void FUN0()
{
    int count;
    count = -1;
    while(1)
    {
        count = RAND32();
        break;
    }
    while(1)
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
        break;
    }
}
void FUN1()
{
    int count;
    count = -1;
    while(1)
    {
        count = 20;
        break;
    }
    while(1)
    {
        {
            size_t i = 0;
            for (i = 0; i < (size_t)count; i++)
            {
                printLine("Hello");
            }
        }
        break;
    }
}
