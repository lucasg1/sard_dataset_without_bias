void FUN0()
{
    int i,k;
    char data;
    data = ' ';
    for(i = 0; i < 1; i++)
    {
        data = CHAR_MIN;
    }
    for(k = 0; k < 1; k++)
    {
        if (data > CHAR_MIN)
        {
            char result = data - 1;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
        }
    }
}
void FUN1()
{
    int h,j;
    char data;
    data = ' ';
    for(h = 0; h < 1; h++)
    {
        data = -2;
    }
    for(j = 0; j < 1; j++)
    {
        {
            char result = data - 1;
            printHexCharLine(result);
        }
    }
}
