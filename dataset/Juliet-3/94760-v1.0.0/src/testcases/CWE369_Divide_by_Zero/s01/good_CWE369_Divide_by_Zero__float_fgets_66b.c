void FUN0(float dataArray[]);
void FUN1()
{
    float data;
    float dataArray[5];
    data = 0.0F;
    data = 2.0F;
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(float dataArray[]);
void FUN3()
{
    float data;
    float dataArray[5];
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
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN0(float dataArray[])
{
    float data = dataArray[2];
    {
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}
void FUN2(float dataArray[])
{
    float data = dataArray[2];
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
