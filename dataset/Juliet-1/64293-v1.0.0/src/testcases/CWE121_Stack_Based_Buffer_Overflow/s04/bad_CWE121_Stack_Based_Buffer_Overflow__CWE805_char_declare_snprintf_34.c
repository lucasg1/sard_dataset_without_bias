typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_snprintf_34_unionType;
void FUN0()
{
    char * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_snprintf_34_unionType myUnion;
    char VAR0[50];
    char VAR1[100];
    data = VAR0;
    data[0] = '\0'; 
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char source[100];
            memset(source, 'C', 100-1); 
            source[100-1] = '\0'; 
<START>
            SNPRINTF(data, 100, "%s", source);
<END>
            printLine(data);
        }
    }
}
