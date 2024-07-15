static float FUN0(float data)
{
    data = 2.0F;
    return data;
}
void FUN1()
{
    float data;
    data = 0.0F;
    data = FUN0(data);
    {
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}
static float FUN2(float data)
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
void FUN3()
{
    float data;
    data = 0.0F;
    data = FUN2(data);
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
