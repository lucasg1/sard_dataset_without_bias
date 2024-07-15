void FUN0()
{
    int data;
    data = 0;
    goto source;
source:
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            data = atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    goto sink;
sink:
    {
<START>
        int result = data - 1;
<END>
        printIntLine(result);
    }
}
