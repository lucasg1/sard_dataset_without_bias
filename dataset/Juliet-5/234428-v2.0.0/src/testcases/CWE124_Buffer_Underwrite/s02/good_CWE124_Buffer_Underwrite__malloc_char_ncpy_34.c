typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE124_Buffer_Underwrite__malloc_char_ncpy_34_unionType;
void FUN0()
{
    char * data;
    CWE124_Buffer_Underwrite__malloc_char_ncpy_34_unionType myUnion;
    data = NULL;
    {
        char * dataBuffer = (char *)malloc(100*sizeof(char));
        if (dataBuffer == NULL) {exit(-1);}
        memset(dataBuffer, 'A', 100-1);
        dataBuffer[100-1] = '\0';
        data = dataBuffer;
    }
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char source[100];
            memset(source, 'C', 100-1); 
            source[100-1] = '\0'; 
            strncpy(data, source, 100-1);
            data[100-1] = '\0';
            printLine(data);
        }
    }
}
