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
        {
            unsigned int result = data * data;
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
        if (abs((long)data) < (long)sqrt((double)UINT_MAX))
        {
            unsigned int result = data * data;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
} 
