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
void FUN4(int count);
void FUN0(int count)
{
    FUN4(count);
}
void FUN1(int count);
void FUN2(int count)
{
    FUN1(count);
}
void FUN4(int count)
{
<START>
    SLEEP(count);
<END>
    printLine("Sleep time possibly too long");
}
