namespace NAMESPACE0
{
void FUN0(int &count)
{
    count = 20;
}
void FUN1()
{
    int count;
    count = -1;
    FUN0(count);
    SLEEP(count);
    printLine("Sleep time possibly too long");
}
void FUN2(int &count)
{
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
}
void FUN3()
{
    int count;
    count = -1;
    FUN2(count);
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
} 
