void FUN0(int count);
void FUN1(int count)
{
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
void FUN1(int count);
void FUN2(int count)
{
    FUN1(count);
}
void FUN6(int count);
void FUN0(int count)
{
    FUN6(count);
}
void FUN6(int count)
{
    {
        size_t i = 0;
<START>
        for (i = 0; i < (size_t)count; i++)
<END>
        {
            printLine("Hello");
        }
    }
}
