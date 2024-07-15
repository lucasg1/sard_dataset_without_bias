typedef struct _CWE427_Uncontrolled_Search_Path_Element__char_console_67_structType
{
    char * structFirst;
} CWE427_Uncontrolled_Search_Path_Element__char_console_67_structType;
void FUN0(CWE427_Uncontrolled_Search_Path_Element__char_console_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE427_Uncontrolled_Search_Path_Element__char_console_67_structType myStruct;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    {
        size_t dataLen = strlen(data);
        if (250-dataLen > 1)
        {
            if (fgets(data+dataLen, (int)(250-dataLen), stdin) != NULL)
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
typedef struct _CWE427_Uncontrolled_Search_Path_Element__char_console_67_structType
{
    char * structFirst;
} CWE427_Uncontrolled_Search_Path_Element__char_console_67_structType;
void FUN0(CWE427_Uncontrolled_Search_Path_Element__char_console_67_structType myStruct)
{
    char * data = myStruct.structFirst;
<START>
    PUTENV(data);
<END>
}
