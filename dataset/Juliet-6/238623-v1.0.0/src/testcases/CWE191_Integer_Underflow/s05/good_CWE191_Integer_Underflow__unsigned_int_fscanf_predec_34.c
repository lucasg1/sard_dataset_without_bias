typedef union
{
    unsigned int unionFirst;
    unsigned int unionSecond;
} CWE191_Integer_Underflow__unsigned_int_fscanf_predec_34_unionType;
void FUN0()
{
    unsigned int data;
    CWE191_Integer_Underflow__unsigned_int_fscanf_predec_34_unionType myUnion;
    data = 0;
    data = -2;
    myUnion.unionFirst = data;
    {
        unsigned int data = myUnion.unionSecond;
        {
            --data;
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
void FUN1()
{
    unsigned int data;
    CWE191_Integer_Underflow__unsigned_int_fscanf_predec_34_unionType myUnion;
    data = 0;
    fscanf (stdin, "%u", &data);
    myUnion.unionFirst = data;
    {
        unsigned int data = myUnion.unionSecond;
        if (data > 0)
        {
            --data;
            unsigned int result = data;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
