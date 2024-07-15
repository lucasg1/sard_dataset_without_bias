typedef union
{
    int64_t unionFirst;
    int64_t unionSecond;
} CWE191_Integer_Underflow__int64_t_fscanf_multiply_34_unionType;
void FUN0()
{
    int64_t data;
    CWE191_Integer_Underflow__int64_t_fscanf_multiply_34_unionType myUnion;
    data = 0LL;
    fscanf (stdin, "%" SCNd64, &data);
    myUnion.unionFirst = data;
    {
        int64_t data = myUnion.unionSecond;
        if(data < 0) 
        {
<START>
            int64_t result = data * 2;
<END>
            printLongLongLine(result);
        }
    }
}
