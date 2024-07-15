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
            unsigned int result = data + 1;
            printUnsignedLine(result);
        }
    }
}
void FUN1()
{
    unsigned int data;
    unsigned int &dataRef = data;
    data = 0;
    fscanf (stdin, "%u", &data);
    {
        unsigned int data = dataRef;
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
} 
