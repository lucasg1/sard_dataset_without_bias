void FUN0()
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
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
    }
}
