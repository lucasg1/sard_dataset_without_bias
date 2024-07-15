typedef struct _CWE427_Uncontrolled_Search_Path_Element__char_environment_67_structType
{
    char * structFirst;
} CWE427_Uncontrolled_Search_Path_Element__char_environment_67_structType;
void FUN0(CWE427_Uncontrolled_Search_Path_Element__char_environment_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE427_Uncontrolled_Search_Path_Element__char_environment_67_structType myStruct;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    {
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, 250-dataLen-1);
        }
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE427_Uncontrolled_Search_Path_Element__char_environment_67_structType
{
    char * structFirst;
} CWE427_Uncontrolled_Search_Path_Element__char_environment_67_structType;
void FUN0(CWE427_Uncontrolled_Search_Path_Element__char_environment_67_structType myStruct)
{
    char * data = myStruct.structFirst;
<START>
    PUTENV(data);
<END>
}
