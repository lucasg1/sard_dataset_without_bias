void FUN0()
{
    int count;
    int *countPtr1 = &count;
    int *countPtr2 = &count;
    count = -1;
    {
        int count = *countPtr1;
        count = 20;
        *countPtr1 = count;
    }
    {
        int count = *countPtr2;
        {
            size_t i = 0;
            for (i = 0; i < (size_t)count; i++)
            {
                printLine("Hello");
            }
        }
    }
}
void FUN1()
{
    int count;
    int *countPtr1 = &count;
    int *countPtr2 = &count;
    count = -1;
    {
        int count = *countPtr1;
        fscanf(stdin, "%d", &count);
        *countPtr1 = count;
    }
    {
        int count = *countPtr2;
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
