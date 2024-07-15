typedef union
{
    unsigned int unionFirst;
    unsigned int unionSecond;
} CWE190_Integer_Overflow__unsigned_int_rand_postinc_34_unionType;
void FUN0()
{
    unsigned int data;
    CWE190_Integer_Overflow__unsigned_int_rand_postinc_34_unionType myUnion;
    data = 0;
    data = 2;
    myUnion.unionFirst = data;
    {
        unsigned int data = myUnion.unionSecond;
        {
            data++;
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
void FUN1()
{
    unsigned int data;
    CWE190_Integer_Overflow__unsigned_int_rand_postinc_34_unionType myUnion;
    data = 0;
    data = (unsigned int)RAND32();
    myUnion.unionFirst = data;
    {
        unsigned int data = myUnion.unionSecond;
        if (data < UINT_MAX)
        {
            data++;
            unsigned int result = data;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
