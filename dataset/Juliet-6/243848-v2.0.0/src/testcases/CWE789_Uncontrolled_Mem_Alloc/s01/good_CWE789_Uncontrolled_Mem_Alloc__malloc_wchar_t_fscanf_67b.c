typedef struct _CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_67_structType
{
    size_t structFirst;
} CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_67_structType;
void FUN0(CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_67_structType myStruct);
void FUN1()
{
    size_t data;
    CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_67_structType myStruct;
    data = 0;
    data = 20;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_67_structType myStruct);
void FUN3()
{
    size_t data;
    CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_67_structType myStruct;
    data = 0;
    fscanf(stdin, "%zu", &data);
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_67_structType
{
    size_t structFirst;
} CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_67_structType;
void FUN0(CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_67_structType myStruct)
{
    size_t data = myStruct.structFirst;
    {
        wchar_t * myString;
        if (data > wcslen(HELLO_STRING))
        {
            myString = (wchar_t *)malloc(data*sizeof(wchar_t));
            if (myString == NULL) {exit(-1);}
            wcscpy(myString, HELLO_STRING);
            printWLine(myString);
            free(myString);
        }
        else
        {
            printLine("Input is less than the length of the source string");
        }
    }
}
void FUN2(CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_67_structType myStruct)
{
    size_t data = myStruct.structFirst;
    {
        wchar_t * myString;
        if (data > wcslen(HELLO_STRING) && data < 100)
        {
            myString = (wchar_t *)malloc(data*sizeof(wchar_t));
            if (myString == NULL) {exit(-1);}
            wcscpy(myString, HELLO_STRING);
            printWLine(myString);
            free(myString);
        }
        else
        {
            printLine("Input is less than the length of the source string or too large");
        }
    }
}
