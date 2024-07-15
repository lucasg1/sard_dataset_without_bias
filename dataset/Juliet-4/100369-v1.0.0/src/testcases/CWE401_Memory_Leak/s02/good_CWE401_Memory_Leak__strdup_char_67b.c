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
    data = (char *)ALLOCA(100*sizeof(char));
    strcpy(data, "a string");
    printLine(data);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE401_Memory_Leak__strdup_char_67_structType myStruct);
void FUN3()
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
    FUN2(myStruct);
}
typedef struct _CWE401_Memory_Leak__strdup_char_67_structType
{
    char * structFirst;
} CWE401_Memory_Leak__strdup_char_67_structType;
void FUN0(CWE401_Memory_Leak__strdup_char_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    ; 
}
void FUN2(CWE401_Memory_Leak__strdup_char_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    free(data);
}
