typedef union
{
    int64_t * unionFirst;
    int64_t * unionSecond;
} CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memmove_34_unionType;
void FUN0()
{
    int64_t * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memmove_34_unionType myUnion;
    int64_t * dataBadBuffer = (int64_t *)ALLOCA(50*sizeof(int64_t));
    int64_t * dataGoodBuffer = (int64_t *)ALLOCA(100*sizeof(int64_t));
    data = dataBadBuffer;
    myUnion.unionFirst = data;
    {
        int64_t * data = myUnion.unionSecond;
        {
            int64_t source[100] = {0}; 
<START>
            memmove(data, source, 100*sizeof(int64_t));
<END>
            printLongLongLine(data[0]);
        }
    }
}
