void FUN0()
{
    int data;
    data = 0;
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
    {
        int dataCopy = data;
        int data = dataCopy;
        {
<START>
            data--;
<END>
            int result = data;
            printIntLine(result);
        }
    }
}
