typedef struct _CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_67_structType
{
    size_t structFirst;
} CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_67_structType;
void FUN0(CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_67_structType myStruct);
void FUN1()
{
    size_t data;
    CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_67_structType myStruct;
    data = 0;
    data = 20;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_67_structType myStruct);
void FUN3()
{
    size_t data;
    CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_67_structType myStruct;
    data = 0;
    fscanf(stdin, "%zu", &data);
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_67_structType
{
    size_t structFirst;
} CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_67_structType;
void FUN0(CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_67_structType myStruct)
{
    size_t data = myStruct.structFirst;
    {
        char * myString;
        if (data > strlen(HELLO_STRING))
        {
            myString = (char *)malloc(data*sizeof(char));
            if (myString == NULL) {exit(-1);}
            strcpy(myString, HELLO_STRING);
            printLine(myString);
            free(myString);
        }
        else
        {
            printLine("Input is less than the length of the source string");
        }
    }
}
void FUN2(CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_67_structType myStruct)
{
    size_t data = myStruct.structFirst;
    {
        char * myString;
        if (data > strlen(HELLO_STRING) && data < 100)
        {
            myString = (char *)malloc(data*sizeof(char));
            if (myString == NULL) {exit(-1);}
            strcpy(myString, HELLO_STRING);
            printLine(myString);
            free(myString);
        }
        else
        {
            printLine("Input is less than the length of the source string or too large");
        }
    }
}
