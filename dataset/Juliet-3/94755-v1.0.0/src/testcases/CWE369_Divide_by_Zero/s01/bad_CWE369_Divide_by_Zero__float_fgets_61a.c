float FUN0(float data)
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
    return data;
}
float FUN0(float data);
void FUN2()
{
    float data;
    data = 0.0F;
    data = FUN0(data);
    {
<START>
        int result = (int)(100.0 / data);
<END>
        printIntLine(result);
    }
}
