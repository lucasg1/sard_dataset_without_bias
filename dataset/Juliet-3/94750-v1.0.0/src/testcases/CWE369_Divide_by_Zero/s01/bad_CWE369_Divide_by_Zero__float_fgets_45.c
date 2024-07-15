static float VAR0;
static float VAR1;
static float VAR2;
void FUN0()
{
    float data = VAR0;
    {
<START>
        int result = (int)(100.0 / data);
<END>
        printIntLine(result);
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
    VAR0 = data;
    FUN0();
}
