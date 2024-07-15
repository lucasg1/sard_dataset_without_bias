typedef struct _CWE401_Memory_Leak__strdup_char_67_structType
{
    char * structFirst;
} CWE401_Memory_Leak__strdup_char_67_structType;
void FUN0(CWE401_Memory_Leak__strdup_char_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE401_Memory_Leak__strdup_char_67_structType myStruct;
    data = NULL;
    {
        char myString[] = "myString";
        data = strdup(myString);
        printLine(data);
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE401_Memory_Leak__strdup_char_67_structType
{
    char * structFirst;
} CWE401_Memory_Leak__strdup_char_67_structType;
void FUN0(CWE401_Memory_Leak__strdup_char_67_structType myStruct)
{
    char * data = myStruct.structFirst;
<START>
<END>
    ; 
}
