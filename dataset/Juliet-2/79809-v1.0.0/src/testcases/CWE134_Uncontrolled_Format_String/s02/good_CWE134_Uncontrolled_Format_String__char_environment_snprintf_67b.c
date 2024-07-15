typedef struct _CWE134_Uncontrolled_Format_String__char_environment_snprintf_67_structType
{
    char * structFirst;
} CWE134_Uncontrolled_Format_String__char_environment_snprintf_67_structType;
void FUN0(CWE134_Uncontrolled_Format_String__char_environment_snprintf_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE134_Uncontrolled_Format_String__char_environment_snprintf_67_structType myStruct;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "fixedstringtest");
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE134_Uncontrolled_Format_String__char_environment_snprintf_67_structType myStruct);
void FUN3()
{
    char * data;
    CWE134_Uncontrolled_Format_String__char_environment_snprintf_67_structType myStruct;
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
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE134_Uncontrolled_Format_String__char_environment_snprintf_67_structType
{
    char * structFirst;
} CWE134_Uncontrolled_Format_String__char_environment_snprintf_67_structType;
void FUN0(CWE134_Uncontrolled_Format_String__char_environment_snprintf_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        char dest[100] = "";
        SNPRINTF(dest, 100-1, data);
        printLine(dest);
    }
}
void FUN2(CWE134_Uncontrolled_Format_String__char_environment_snprintf_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        char dest[100] = "";
        SNPRINTF(dest, 100-1, "%s", data);
        printLine(dest);
    }
}
