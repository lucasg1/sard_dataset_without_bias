void FUN0()
{
    float data;
    data = 0.0F;
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
    {
        float dataCopy = data;
        float data = dataCopy;
        {
<START>
            int result = (int)(100.0 / data);
<END>
            printIntLine(result);
        }
    }
}
