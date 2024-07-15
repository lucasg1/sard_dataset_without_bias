typedef struct _CWE606_Unchecked_Loop_Condition__char_environment_67_structType
{
    char * structFirst;
} CWE606_Unchecked_Loop_Condition__char_environment_67_structType;
void FUN0(CWE606_Unchecked_Loop_Condition__char_environment_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE606_Unchecked_Loop_Condition__char_environment_67_structType myStruct;
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
    FUN0(myStruct);
}
typedef struct _CWE606_Unchecked_Loop_Condition__char_environment_67_structType
{
    char * structFirst;
} CWE606_Unchecked_Loop_Condition__char_environment_67_structType;
void FUN0(CWE606_Unchecked_Loop_Condition__char_environment_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        int i, n, intVariable;
        if (sscanf(data, "%d", &n) == 1)
        {
            intVariable = 0;
<START>
            for (i = 0; i < n; i++)
<END>
            {
                intVariable++; 
            }
            printIntLine(intVariable);
        }
    }
}
