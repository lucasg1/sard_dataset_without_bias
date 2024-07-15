typedef union
{
    int64_t unionFirst;
    int64_t unionSecond;
} CWE190_Integer_Overflow__int64_t_fscanf_square_34_unionType;
void FUN0()
{
    int64_t data;
    CWE190_Integer_Overflow__int64_t_fscanf_square_34_unionType myUnion;
    data = 0LL;
    fscanf (stdin, "%" SCNd64, &data);
    myUnion.unionFirst = data;
    {
        int64_t data = myUnion.unionSecond;
        {
<START>
            int64_t result = data * data;
<END>
            printLongLongLine(result);
        }
    }
}
