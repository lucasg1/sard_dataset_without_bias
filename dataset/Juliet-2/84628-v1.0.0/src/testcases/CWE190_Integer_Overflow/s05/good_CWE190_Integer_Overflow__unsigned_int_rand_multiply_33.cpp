namespace NAMESPACE0
{
void FUN0()
{
    unsigned int data;
    unsigned int &dataRef = data;
    data = 0;
    data = 2;
    {
        unsigned int data = dataRef;
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
    unsigned int &dataRef = data;
    data = 0;
    data = (unsigned int)RAND32();
    {
        unsigned int data = dataRef;
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
} 
