typedef struct _CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_67_structType
{
    size_t structFirst;
} CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_67_structType;
void FUN0(CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_67_structType myStruct);
void FUN1()
{
    size_t data;
    CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_67_structType myStruct;
    data = 0;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            data = strtoul(inputBuffer, NULL, 0);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_67_structType
{
    size_t structFirst;
} CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_67_structType;
void FUN0(CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_67_structType myStruct)
{
    size_t data = myStruct.structFirst;
    {
        char * myString;
        if (data > strlen(HELLO_STRING))
        {
<START>
            myString = (char *)malloc(data*sizeof(char));
<END>
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
