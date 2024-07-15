static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    unsigned int data;
    data = 0;
    if(STATIC_CONST_TRUE)
    {
        fscanf (stdin, "%u", &data);
    }
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
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
    unsigned int data;
    data = 0;
    if(STATIC_CONST_TRUE)
    {
        fscanf (stdin, "%u", &data);
    }
    if(STATIC_CONST_TRUE)
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
void FUN2()
{
    unsigned int data;
    data = 0;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2;
    }
    if(STATIC_CONST_TRUE)
    {
        {
            unsigned int result = data + 1;
            printUnsignedLine(result);
        }
    }
}
void FUN3()
{
    unsigned int data;
    data = 0;
    if(STATIC_CONST_TRUE)
    {
        data = 2;
    }
    if(STATIC_CONST_TRUE)
    {
        {
            unsigned int result = data + 1;
            printUnsignedLine(result);
        }
    }
}
