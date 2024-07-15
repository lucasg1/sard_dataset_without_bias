void FUN0()
{
    float data;
    data = 0.0F;
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            char inputBuffer[CHAR_ARRAY_SIZE];
            if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
            {
                data = (float)atof(inputBuffer);
            }
            else
            {
                printLine("fgets() failed.");
            }
        }
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        {
<START>
            int result = (int)(100.0 / data);
<END>
            printIntLine(result);
        }
    }
}
