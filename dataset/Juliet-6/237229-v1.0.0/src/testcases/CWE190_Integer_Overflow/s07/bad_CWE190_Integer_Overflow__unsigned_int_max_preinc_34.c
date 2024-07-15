typedef union
{
    unsigned int unionFirst;
    unsigned int unionSecond;
} CWE190_Integer_Overflow__unsigned_int_max_preinc_34_unionType;
void FUN0()
{
    unsigned int data;
    CWE190_Integer_Overflow__unsigned_int_max_preinc_34_unionType myUnion;
    data = 0;
    data = UINT_MAX;
    myUnion.unionFirst = data;
    {
        unsigned int data = myUnion.unionSecond;
        {
<START>
            ++data;
<END>
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
