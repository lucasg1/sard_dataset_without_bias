typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE134_Uncontrolled_Format_String__char_file_printf_34_unionType;
void FUN0()
{
    char * data;
    CWE134_Uncontrolled_Format_String__char_file_printf_34_unionType myUnion;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "fixedstringtest");
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        printf(data);
    }
}
void FUN1()
{
    char * data;
    CWE134_Uncontrolled_Format_String__char_file_printf_34_unionType myUnion;
    char dataBuffer[100] = "";
    data = dataBuffer;
    {
        size_t dataLen = strlen(data);
        FILE * pFile;
        if (100-dataLen > 1)
        {
            pFile = fopen(FILENAME, "r");
            if (pFile != NULL)
            {
                if (fgets(data+dataLen, (int)(100-dataLen), pFile) == NULL)
                {
                    printLine("fgets() failed");
                    data[dataLen] = '\0';
                }
                fclose(pFile);
            }
        }
    }
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        printf("%s\n", data);
    }
}
