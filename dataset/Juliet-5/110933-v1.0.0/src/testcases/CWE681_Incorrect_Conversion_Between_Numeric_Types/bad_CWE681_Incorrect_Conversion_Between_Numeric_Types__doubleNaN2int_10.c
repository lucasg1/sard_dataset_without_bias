void FUN0()
{
    if(globalTrue)
    {
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
            printIntLine((int)(sqrt(doubleNumber)));
<END>
        }
    }
}
