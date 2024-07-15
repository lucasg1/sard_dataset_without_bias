void FUN0()
{
    float data;
    float *dataPtr1 = &data;
    float *dataPtr2 = &data;
    data = 0.0F;
    {
        float data = *dataPtr1;
        data = 2.0F;
        *dataPtr1 = data;
    }
    {
        float data = *dataPtr2;
        {
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
    }
}
void FUN1()
{
    float data;
    float *dataPtr1 = &data;
    float *dataPtr2 = &data;
    data = 0.0F;
    {
        float data = *dataPtr1;
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
        *dataPtr1 = data;
    }
    {
        float data = *dataPtr2;
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
