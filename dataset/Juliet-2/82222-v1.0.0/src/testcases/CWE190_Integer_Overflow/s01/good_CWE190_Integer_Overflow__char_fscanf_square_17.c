void FUN0()
{
    int i,k;
    char data;
    data = ' ';
    for(i = 0; i < 1; i++)
    {
        fscanf (stdin, "%c", &data);
    }
    for(k = 0; k < 1; k++)
    {
        if (abs((long)data) <= (long)sqrt((double)CHAR_MAX))
        {
            char result = data * data;
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
            char result = data * data;
            printHexCharLine(result);
        }
    }
}