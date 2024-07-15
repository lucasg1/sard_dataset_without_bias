typedef union
{
    unsigned int unionFirst;
    unsigned int unionSecond;
} CWE191_Integer_Underflow__unsigned_int_fscanf_sub_34_unionType;
void FUN0()
{
    unsigned int data;
    CWE191_Integer_Underflow__unsigned_int_fscanf_sub_34_unionType myUnion;
    data = 0;
    fscanf (stdin, "%u", &data);
    myUnion.unionFirst = data;
    {
        unsigned int data = myUnion.unionSecond;
        {
<START>
            unsigned int result = data - 1;
<END>
            printUnsignedLine(result);
        }
    }
}
