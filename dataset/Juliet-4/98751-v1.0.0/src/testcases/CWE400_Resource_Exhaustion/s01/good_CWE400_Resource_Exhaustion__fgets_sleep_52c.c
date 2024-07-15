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
void FUN5(int count)
{
    SLEEP(count);
    printLine("Sleep time possibly too long");
}
void FUN7(int count)
{
    if (count > 0 && count <= 2000)
    {
        SLEEP(count);
        printLine("Sleep time OK");
    }
    else
    {
        printLine("Sleep time too long");
    }
}
