typedef union
{
    unsigned int unionFirst;
    unsigned int unionSecond;
} CWE191_Integer_Underflow__unsigned_int_min_sub_34_unionType;
void FUN0()
{
    unsigned int data;
    CWE191_Integer_Underflow__unsigned_int_min_sub_34_unionType myUnion;
    data = 0;
    data = -2;
    myUnion.unionFirst = data;
    {
        unsigned int data = myUnion.unionSecond;
        {
            unsigned int result = data - 1;
            printUnsignedLine(result);
        }
    }
}
void FUN1()
{
    unsigned int data;
    CWE191_Integer_Underflow__unsigned_int_min_sub_34_unionType myUnion;
    data = 0;
    data = 0;
    myUnion.unionFirst = data;
    {
        unsigned int data = myUnion.unionSecond;
        if (data > 0)
        {
            unsigned int result = data - 1;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
        }
    }
}
