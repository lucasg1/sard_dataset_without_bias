void FUN0()
{
    int i,k;
    int count;
    count = -1;
    for(i = 0; i < 1; i++)
    {
        count = RAND32();
    }
    for(k = 0; k < 1; k++)
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
    int h,j;
    int count;
    count = -1;
    for(h = 0; h < 1; h++)
    {
        count = 20;
    }
    for(j = 0; j < 1; j++)
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
