void FUN0(void * dataVoidPtr);
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
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    float * dataPtr = (float *)dataVoidPtr;
    float data = (*dataPtr);
    {
<START>
        int result = (int)(100.0 / data);
<END>
        printIntLine(result);
    }
}
