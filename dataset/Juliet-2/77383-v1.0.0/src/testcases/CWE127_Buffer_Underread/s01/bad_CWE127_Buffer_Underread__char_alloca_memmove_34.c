typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE127_Buffer_Underread__char_alloca_memmove_34_unionType;
void FUN0()
{
    char * data;
    CWE127_Buffer_Underread__char_alloca_memmove_34_unionType myUnion;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    data = dataBuffer - 8;
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char dest[100];
            memset(dest, 'C', 100-1); 
            dest[100-1] = '\0'; 
<START>
            memmove(dest, data, 100*sizeof(char));
<END>
            dest[100-1] = '\0';
            printLine(dest);
        }
    }
}