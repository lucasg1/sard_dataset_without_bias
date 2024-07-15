void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
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
            printFloatLine((float)doubleNumber);
<END>
        }
    }
}
