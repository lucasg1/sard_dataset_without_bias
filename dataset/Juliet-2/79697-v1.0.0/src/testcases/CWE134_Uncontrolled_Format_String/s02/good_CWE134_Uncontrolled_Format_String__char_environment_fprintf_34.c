typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE134_Uncontrolled_Format_String__char_environment_fprintf_34_unionType;
void FUN0()
{
    char * data;
    CWE134_Uncontrolled_Format_String__char_environment_fprintf_34_unionType myUnion;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "fixedstringtest");
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        fprintf(stdout, data);
    }
}
void FUN1()
{
    char * data;
    CWE134_Uncontrolled_Format_String__char_environment_fprintf_34_unionType myUnion;
    char dataBuffer[100] = "";
    data = dataBuffer;
    {
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        fprintf(stdout, "%s\n", data);
    }
}
