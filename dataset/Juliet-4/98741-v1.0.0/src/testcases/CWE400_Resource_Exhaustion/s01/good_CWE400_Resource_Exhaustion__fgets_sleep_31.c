void FUN0()
{
    int count;
    count = -1;
    count = 20;
    {
        int countCopy = count;
        int count = countCopy;
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}
void FUN1()
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
    {
        int countCopy = count;
        int count = countCopy;
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
