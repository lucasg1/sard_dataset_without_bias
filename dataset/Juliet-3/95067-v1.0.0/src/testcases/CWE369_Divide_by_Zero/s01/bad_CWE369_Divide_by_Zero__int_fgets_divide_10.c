void FUN0()
{
    int data;
    data = -1;
    if(globalTrue)
    {
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
    }
    if(globalTrue)
    {
<START>
        printIntLine(100 / data);
<END>
    }
}
