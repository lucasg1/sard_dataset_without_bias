void FUN0(int * count);
void FUN1()
{
    int count;
    count = -1;
    count = 20;
    FUN0(&count);
}
void FUN2(int * count);
void FUN3()
{
    int count;
    count = -1;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            count = atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    FUN2(&count);
}
void FUN0(int * countPtr)
{
    int count = *countPtr;
    {
        size_t i = 0;
        for (i = 0; i < (size_t)count; i++)
        {
            printLine("Hello");
        }
    }
}
void FUN2(int * countPtr)
{
    int count = *countPtr;
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
