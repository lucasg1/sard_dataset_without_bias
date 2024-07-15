float VAR0;
float VAR1;
float VAR2;
void FUN0();
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
extern float VAR0;
extern float VAR1;
extern float VAR2;
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
