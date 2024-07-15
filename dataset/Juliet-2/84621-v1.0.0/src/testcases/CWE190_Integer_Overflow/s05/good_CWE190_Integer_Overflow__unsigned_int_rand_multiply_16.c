void FUN0()
{
    unsigned int data;
    data = 0;
    while(1)
    {
        data = (unsigned int)RAND32();
        break;
    }
    while(1)
    {
        if(data > 0) 
        {
            if (data < (UINT_MAX/2))
            {
                unsigned int result = data * 2;
                printUnsignedLine(result);
            }
            else
            {
                printLine("data value is too large to perform arithmetic safely.");
            }
        }
        break;
    }
}
void FUN1()
{
    unsigned int data;
    data = 0;
    while(1)
    {
        data = 2;
        break;
    }
    while(1)
    {
        if(data > 0) 
        {
            unsigned int result = data * 2;
            printUnsignedLine(result);
        }
        break;
    }
}
