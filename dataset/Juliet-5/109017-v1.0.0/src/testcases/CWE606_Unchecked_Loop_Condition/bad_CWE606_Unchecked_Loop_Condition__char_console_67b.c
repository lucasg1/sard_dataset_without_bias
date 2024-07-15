typedef struct _CWE606_Unchecked_Loop_Condition__char_console_67_structType
{
    char * structFirst;
} CWE606_Unchecked_Loop_Condition__char_console_67_structType;
void FUN0(CWE606_Unchecked_Loop_Condition__char_console_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE606_Unchecked_Loop_Condition__char_console_67_structType myStruct;
    char dataBuffer[100] = "";
    data = dataBuffer;
    {
        size_t dataLen = strlen(data);
        if (100-dataLen > 1)
        {
            if (fgets(data+dataLen, (int)(100-dataLen), stdin) != NULL)
            {
                dataLen = strlen(data);
                if (dataLen > 0 && data[dataLen-1] == '\n')
                {
                    data[dataLen-1] = '\0';
                }
            }
            else
            {
                printLine("fgets() failed");
                data[dataLen] = '\0';
            }
        }
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE606_Unchecked_Loop_Condition__char_console_67_structType
{
    char * structFirst;
} CWE606_Unchecked_Loop_Condition__char_console_67_structType;
void FUN0(CWE606_Unchecked_Loop_Condition__char_console_67_structType myStruct)
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
