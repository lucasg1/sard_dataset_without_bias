void FUN0()
{
    goto sink;
sink:
    {
        char inputBuffer[CHAR_ARRAY_SIZE];
        double doubleNumber = 0;
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            doubleNumber = atof(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
<START>
        printIntLine((int)doubleNumber);
<END>
    }
}
