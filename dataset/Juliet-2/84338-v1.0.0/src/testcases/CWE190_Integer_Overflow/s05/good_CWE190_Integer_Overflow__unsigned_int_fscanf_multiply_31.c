void FUN0()
{
    unsigned int data;
    data = 0;
    data = 2;
    {
        unsigned int dataCopy = data;
        unsigned int data = dataCopy;
        if(data > 0) 
        {
            unsigned int result = data * 2;
            printUnsignedLine(result);
        }
    }
}
void FUN1()
{
    unsigned int data;
    data = 0;
    fscanf (stdin, "%u", &data);
    {
        unsigned int dataCopy = data;
        unsigned int data = dataCopy;
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
    }
}
