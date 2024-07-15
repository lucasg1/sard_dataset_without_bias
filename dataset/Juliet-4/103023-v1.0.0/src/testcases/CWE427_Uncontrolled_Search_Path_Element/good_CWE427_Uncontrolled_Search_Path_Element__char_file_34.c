typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE427_Uncontrolled_Search_Path_Element__char_file_34_unionType;
void FUN0()
{
    char * data;
    CWE427_Uncontrolled_Search_Path_Element__char_file_34_unionType myUnion;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    strcat(data, NEW_PATH);
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        PUTENV(data);
    }
}
