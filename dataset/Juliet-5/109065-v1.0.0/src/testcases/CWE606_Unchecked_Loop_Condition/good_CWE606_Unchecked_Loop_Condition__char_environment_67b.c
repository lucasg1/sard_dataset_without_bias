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
    strcpy(data, "15");
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE606_Unchecked_Loop_Condition__char_environment_67_structType myStruct);
void FUN3()
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
    FUN2(myStruct);
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
            for (i = 0; i < n; i++)
            {
                intVariable++; 
            }
            printIntLine(intVariable);
        }
    }
}
void FUN2(CWE606_Unchecked_Loop_Condition__char_environment_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        int i, n, intVariable;
        if (sscanf(data, "%d", &n) == 1)
        {
            if (n < MAX_LOOP)
            {
                intVariable = 0;
                for (i = 0; i < n; i++)
                {
                    intVariable++; 
                }
                printIntLine(intVariable);
            }
        }
    }
}
