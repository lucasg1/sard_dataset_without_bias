void FUN0(int count);
void FUN1()
{
    int count;
    count = -1;
    count = 20;
    FUN0(count);
}
void FUN2(int count);
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
    FUN2(count);
}
void FUN5(int count);
void FUN0(int count)
{
    FUN5(count);
}
void FUN7(int count);
void FUN2(int count)
{
    FUN7(count);
}
void FUN9(int count);
void FUN5(int count)
{
    FUN9(count);
}
void FUN11(int count);
void FUN7(int count)
{
    FUN11(count);
}
void FUN9(int count)
{
    {
        size_t i = 0;
        for (i = 0; i < (size_t)count; i++)
        {
            printLine("Hello");
        }
    }
}
void FUN11(int count)
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
