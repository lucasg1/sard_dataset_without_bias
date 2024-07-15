typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE665_Improper_Initialization__char_cat_34_unionType;
void FUN0()
{
    char * data;
    CWE665_Improper_Initialization__char_cat_34_unionType myUnion;
    char dataBuffer[100];
    data = dataBuffer;
    data[0] = '\0'; 
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char source[100];
            memset(source, 'C', 100-1); 
            source[100-1] = '\0'; 
            strcat(data, source);
            printLine(data);
        }
    }
}
