typedef struct _CWE126_Buffer_Overread__char_declare_memmove_67_structType
{
    char * structFirst;
} CWE126_Buffer_Overread__char_declare_memmove_67_structType;
void FUN0(CWE126_Buffer_Overread__char_declare_memmove_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE126_Buffer_Overread__char_declare_memmove_67_structType myStruct;
    char VAR0[50];
    char VAR1[100];
    memset(VAR0, 'A', 50-1); 
    VAR0[50-1] = '\0'; 
    memset(VAR1, 'A', 100-1); 
    VAR1[100-1] = '\0'; 
    data = VAR1;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE126_Buffer_Overread__char_declare_memmove_67_structType
{
    char * structFirst;
} CWE126_Buffer_Overread__char_declare_memmove_67_structType;
void FUN0(CWE126_Buffer_Overread__char_declare_memmove_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
        memmove(dest, data, strlen(dest)*sizeof(char));
        dest[100-1] = '\0';
        printLine(dest);
    }
}
