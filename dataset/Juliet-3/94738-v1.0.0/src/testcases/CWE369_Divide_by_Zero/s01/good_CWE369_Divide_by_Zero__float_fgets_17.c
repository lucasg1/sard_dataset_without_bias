void FUN0()
{
    int i,k;
    float data;
    data = 0.0F;
    for(i = 0; i < 1; i++)
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
    }
    for(k = 0; k < 1; k++)
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
}
void FUN1()
{
    int h,j;
    float data;
    data = 0.0F;
    for(h = 0; h < 1; h++)
    {
        data = 2.0F;
    }
    for(j = 0; j < 1; j++)
    {
        {
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
    }
}
