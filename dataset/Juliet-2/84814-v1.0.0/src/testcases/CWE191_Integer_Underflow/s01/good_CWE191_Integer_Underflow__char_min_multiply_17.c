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
        if(data < 0) 
        {
            if (data > (CHAR_MIN/2))
            {
                char result = data * 2;
                printHexCharLine(result);
            }
            else
            {
                printLine("data value is too small to perform multiplication.");
            }
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
        if(data < 0) 
        {
            char result = data * 2;
            printHexCharLine(result);
        }
    }
}
