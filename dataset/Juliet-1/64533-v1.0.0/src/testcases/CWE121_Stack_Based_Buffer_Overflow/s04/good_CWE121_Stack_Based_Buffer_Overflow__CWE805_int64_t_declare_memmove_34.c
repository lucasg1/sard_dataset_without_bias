typedef union
{
    int64_t * unionFirst;
    int64_t * unionSecond;
} CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memmove_34_unionType;
void FUN0()
{
    int64_t * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memmove_34_unionType myUnion;
    int64_t dataBadBuffer[50];
    int64_t dataGoodBuffer[100];
    data = dataGoodBuffer;
    myUnion.unionFirst = data;
    {
        int64_t * data = myUnion.unionSecond;
        {
            int64_t source[100] = {0}; 
            memmove(data, source, 100*sizeof(int64_t));
            printLongLongLine(data[0]);
        }
    }
}
