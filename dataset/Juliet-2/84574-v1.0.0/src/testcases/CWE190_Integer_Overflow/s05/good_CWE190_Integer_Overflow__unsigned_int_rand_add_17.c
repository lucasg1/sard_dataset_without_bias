void FUN0()
{
    int i,k;
    unsigned int data;
    data = 0;
    for(i = 0; i < 1; i++)
    {
        data = (unsigned int)RAND32();
    }
    for(k = 0; k < 1; k++)
    {
        if (data < UINT_MAX)
        {
            unsigned int result = data + 1;
            printUnsignedLine(result);
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
    unsigned int data;
    data = 0;
    for(h = 0; h < 1; h++)
    {
        data = 2;
    }
    for(j = 0; j < 1; j++)
    {
        {
            unsigned int result = data + 1;
            printUnsignedLine(result);
        }
    }
}
