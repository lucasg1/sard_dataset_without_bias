void FUN0(float data);
void FUN1(float data)
{
    FUN0(data);
}
void FUN1(float data);
void FUN3()
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
    FUN1(data);
}
void FUN4(float data);
void FUN0(float data)
{
    FUN4(data);
}
void FUN4(float data)
{
    {
<START>
        int result = (int)(100.0 / data);
<END>
        printIntLine(result);
    }
}
