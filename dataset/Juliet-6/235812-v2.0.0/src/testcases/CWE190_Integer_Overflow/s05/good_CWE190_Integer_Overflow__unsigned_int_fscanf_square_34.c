typedef union
{
    unsigned int unionFirst;
    unsigned int unionSecond;
} CWE190_Integer_Overflow__unsigned_int_fscanf_square_34_unionType;
void FUN0()
{
    unsigned int data;
    CWE190_Integer_Overflow__unsigned_int_fscanf_square_34_unionType myUnion;
    data = 0;
    data = 2;
    myUnion.unionFirst = data;
    {
        unsigned int data = myUnion.unionSecond;
        {
            unsigned int result = data * data;
            printUnsignedLine(result);
        }
    }
}
void FUN1()
{
    unsigned int data;
    CWE190_Integer_Overflow__unsigned_int_fscanf_square_34_unionType myUnion;
    data = 0;
    fscanf (stdin, "%u", &data);
    myUnion.unionFirst = data;
    {
        unsigned int data = myUnion.unionSecond;
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
