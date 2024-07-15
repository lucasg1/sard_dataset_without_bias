void FUN0(float dataArray[]);
void FUN1()
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
    FUN0(dataArray);
}
void FUN0(float dataArray[])
{
    float data = dataArray[2];
    {
<START>
        int result = (int)(100.0 / data);
<END>
        printIntLine(result);
    }
}
