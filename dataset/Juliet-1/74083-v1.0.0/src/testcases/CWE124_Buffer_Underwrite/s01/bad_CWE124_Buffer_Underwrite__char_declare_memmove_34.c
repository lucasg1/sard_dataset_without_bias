typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE124_Buffer_Underwrite__char_declare_memmove_34_unionType;
void FUN0()
{
    char * data;
    CWE124_Buffer_Underwrite__char_declare_memmove_34_unionType myUnion;
    char dataBuffer[100];
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    data = dataBuffer - 8;
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char source[100];
            memset(source, 'C', 100-1); 
            source[100-1] = '\0'; 
<START>
            memmove(data, source, 100*sizeof(char));
<END>
            data[100-1] = '\0';
            printLine(data);
        }
    }
}
