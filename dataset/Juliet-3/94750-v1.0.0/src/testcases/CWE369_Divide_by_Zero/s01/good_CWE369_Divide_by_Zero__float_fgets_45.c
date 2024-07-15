static float VAR0;
static float VAR1;
static float VAR2;
void FUN0()
{
    float data = VAR1;
    {
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}
void FUN1()
{
    float data;
    data = 0.0F;
    data = 2.0F;
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    float data = VAR2;
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
    VAR2 = data;
    FUN2();
}
