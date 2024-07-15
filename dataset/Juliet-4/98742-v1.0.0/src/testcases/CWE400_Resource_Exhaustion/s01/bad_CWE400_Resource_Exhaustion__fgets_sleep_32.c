void FUN0()
{
    int count;
    int *countPtr1 = &count;
    int *countPtr2 = &count;
    count = -1;
    {
        int count = *countPtr1;
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
        *countPtr1 = count;
    }
    {
        int count = *countPtr2;
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
    }
}
