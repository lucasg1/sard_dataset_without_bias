typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE127_Buffer_Underread__char_alloca_ncpy_34_unionType;
void FUN0()
{
    char * data;
    CWE127_Buffer_Underread__char_alloca_ncpy_34_unionType myUnion;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    data = dataBuffer;
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char dest[100];
            memset(dest, 'C', 100-1); 
            dest[100-1] = '\0'; 
            strncpy(dest, data, strlen(dest));
            dest[100-1] = '\0';
            printLine(dest);
        }
    }
}
