void FUN0()
{
    float data;
    data = 0.0F;
    data = 2.0F;
    {
        float dataCopy = data;
        float data = dataCopy;
        {
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
    }
}
void FUN1()
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
        if(fabs(data) > 0.000001)
        {
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
    }
}
