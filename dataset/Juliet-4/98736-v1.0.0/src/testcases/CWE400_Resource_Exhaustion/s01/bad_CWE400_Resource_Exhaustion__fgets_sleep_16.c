void FUN0()
{
    int count;
    count = -1;
    while(1)
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
        break;
    }
    while(1)
    {
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
        break;
    }
}
