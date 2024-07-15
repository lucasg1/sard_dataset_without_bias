typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE127_Buffer_Underread__malloc_char_memcpy_34_unionType;
void FUN0()
{
    char * data;
    CWE127_Buffer_Underread__malloc_char_memcpy_34_unionType myUnion;
    data = NULL;
    {
        char * dataBuffer = (char *)malloc(100*sizeof(char));
        if (dataBuffer == NULL) {exit(-1);}
        memset(dataBuffer, 'A', 100-1);
        dataBuffer[100-1] = '\0';
        data = dataBuffer - 8;
    }
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char dest[100];
            memset(dest, 'C', 100-1); 
            dest[100-1] = '\0'; 
<START>
            memcpy(dest, data, 100*sizeof(char));
<END>
            dest[100-1] = '\0';
            printLine(dest);
        }
    }
}
