typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE127_Buffer_Underread__char_alloca_cpy_34_unionType;
void FUN0()
{
    char * data;
    CWE127_Buffer_Underread__char_alloca_cpy_34_unionType myUnion;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    data = dataBuffer - 8;
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char dest[100*2];
            memset(dest, 'C', 100*2-1); 
            dest[100*2-1] = '\0'; 
<START>
            strcpy(dest, data);
<END>
            printLine(dest);
        }
    }
}
