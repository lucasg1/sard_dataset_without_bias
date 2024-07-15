typedef struct _CWE401_Memory_Leak__char_calloc_67_structType
{
    char * structFirst;
} CWE401_Memory_Leak__char_calloc_67_structType;
void FUN0(CWE401_Memory_Leak__char_calloc_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE401_Memory_Leak__char_calloc_67_structType myStruct;
    data = NULL;
    data = (char *)calloc(100, sizeof(char));
    strcpy(data, "A String");
    printLine(data);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE401_Memory_Leak__char_calloc_67_structType
{
    char * structFirst;
} CWE401_Memory_Leak__char_calloc_67_structType;
void FUN0(CWE401_Memory_Leak__char_calloc_67_structType myStruct)
{
    char * data = myStruct.structFirst;
<START>
<END>
    ; 
}
