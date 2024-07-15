typedef union
{
    int64_t unionFirst;
    int64_t unionSecond;
} CWE191_Integer_Underflow__int64_t_fscanf_postdec_34_unionType;
void FUN0()
{
    int64_t data;
    CWE191_Integer_Underflow__int64_t_fscanf_postdec_34_unionType myUnion;
    data = 0LL;
    fscanf (stdin, "%" SCNd64, &data);
    myUnion.unionFirst = data;
    {
        int64_t data = myUnion.unionSecond;
        {
<START>
            data--;
<END>
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
