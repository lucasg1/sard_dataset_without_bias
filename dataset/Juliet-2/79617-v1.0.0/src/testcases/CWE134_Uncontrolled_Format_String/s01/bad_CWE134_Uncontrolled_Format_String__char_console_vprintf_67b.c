typedef struct _CWE134_Uncontrolled_Format_String__char_console_vprintf_67_structType
{
    char * structFirst;
} CWE134_Uncontrolled_Format_String__char_console_vprintf_67_structType;
void FUN0(CWE134_Uncontrolled_Format_String__char_console_vprintf_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE134_Uncontrolled_Format_String__char_console_vprintf_67_structType myStruct;
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
typedef struct _CWE134_Uncontrolled_Format_String__char_console_vprintf_67_structType
{
    char * structFirst;
} CWE134_Uncontrolled_Format_String__char_console_vprintf_67_structType;
void FUN2(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
<START>
        vprintf(data, args);
<END>
        va_end(args);
    }
}
void FUN0(CWE134_Uncontrolled_Format_String__char_console_vprintf_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    FUN2(data, data);
}
