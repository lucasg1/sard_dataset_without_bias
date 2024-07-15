void FUN0()
{
    int i,k;
    char data;
    data = ' ';
    for(i = 0; i < 1; i++)
    {
        data = (char)RAND32();
    }
    for(k = 0; k < 1; k++)
    {
        if (data < CHAR_MAX)
        {
            data++;
            char result = data;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
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
        data = 2;
    }
    for(j = 0; j < 1; j++)
    {
        {
            data++;
            char result = data;
            printHexCharLine(result);
        }
    }
}
