void FUN0(float data);
void FUN1(float data)
{
    FUN0(data);
}
void FUN2(float data);
void FUN3(float data)
{
    FUN2(data);
}
void FUN4(float data);
void FUN5()
{
    float data;
    data = 0.0F;
    data = 2.0F;
    FUN4(data);
}
void FUN6(float data);
void FUN7()
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
    FUN6(data);
}
void FUN1(float data);
void FUN4(float data)
{
    FUN1(data);
}
void FUN3(float data);
void FUN6(float data)
{
    FUN3(data);
}
void FUN13(float data);
void FUN0(float data)
{
    FUN13(data);
}
void FUN15(float data);
void FUN2(float data)
{
    FUN15(data);
}
void FUN13(float data)
{
    {
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}
void FUN15(float data)
{
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
