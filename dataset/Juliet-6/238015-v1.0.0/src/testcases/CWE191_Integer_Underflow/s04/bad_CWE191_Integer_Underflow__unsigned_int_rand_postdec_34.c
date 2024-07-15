typedef union
{
    unsigned int unionFirst;
    unsigned int unionSecond;
} CWE191_Integer_Underflow__unsigned_int_rand_postdec_34_unionType;
void FUN0()
{
    unsigned int data;
    CWE191_Integer_Underflow__unsigned_int_rand_postdec_34_unionType myUnion;
    data = 0;
    data = (unsigned int)RAND32();
    myUnion.unionFirst = data;
    {
        unsigned int data = myUnion.unionSecond;
        {
<START>
            data--;
<END>
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
