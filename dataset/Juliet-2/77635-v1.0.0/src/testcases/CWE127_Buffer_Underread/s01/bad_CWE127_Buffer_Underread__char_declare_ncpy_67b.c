typedef struct _CWE127_Buffer_Underread__char_declare_ncpy_67_structType
{
    char * structFirst;
} CWE127_Buffer_Underread__char_declare_ncpy_67_structType;
void FUN0(CWE127_Buffer_Underread__char_declare_ncpy_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE127_Buffer_Underread__char_declare_ncpy_67_structType myStruct;
    char dataBuffer[100];
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    data = dataBuffer - 8;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE127_Buffer_Underread__char_declare_ncpy_67_structType
{
    char * structFirst;
} CWE127_Buffer_Underread__char_declare_ncpy_67_structType;
void FUN0(CWE127_Buffer_Underread__char_declare_ncpy_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        char dest[100];
        memset(dest, 'C', 100-1); 
        dest[100-1] = '\0'; 
<START>
        strncpy(dest, data, strlen(dest));
<END>
        dest[100-1] = '\0';
        printLine(dest);
    }
}
