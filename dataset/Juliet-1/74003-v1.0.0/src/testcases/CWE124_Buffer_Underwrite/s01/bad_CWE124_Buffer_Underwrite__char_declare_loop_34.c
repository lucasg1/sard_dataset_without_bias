typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE124_Buffer_Underwrite__char_declare_loop_34_unionType;
void FUN0()
{
    char * data;
    CWE124_Buffer_Underwrite__char_declare_loop_34_unionType myUnion;
    char dataBuffer[100];
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    data = dataBuffer - 8;
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            size_t i;
            char source[100];
            memset(source, 'C', 100-1); 
            source[100-1] = '\0'; 
            for (i = 0; i < 100; i++)
            {
<START>
                data[i] = source[i];
<END>
            }
            data[100-1] = '\0';
            printLine(data);
        }
    }
}
