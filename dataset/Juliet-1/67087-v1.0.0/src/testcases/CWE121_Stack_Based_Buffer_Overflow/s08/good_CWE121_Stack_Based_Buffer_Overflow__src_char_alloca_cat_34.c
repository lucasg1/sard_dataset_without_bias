typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_34_unionType;
void FUN0()
{
    char * data;
    CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_34_unionType myUnion;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    data = dataBuffer;
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char dest[50] = "";
            strcat(dest, data);
            printLine(data);
        }
    }
}
