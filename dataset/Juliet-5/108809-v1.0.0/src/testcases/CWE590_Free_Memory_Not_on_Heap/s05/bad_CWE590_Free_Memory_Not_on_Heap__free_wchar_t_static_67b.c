typedef struct _CWE590_Free_Memory_Not_on_Heap__free_wchar_t_static_67_structType
{
    wchar_t * structFirst;
} CWE590_Free_Memory_Not_on_Heap__free_wchar_t_static_67_structType;
void FUN0(CWE590_Free_Memory_Not_on_Heap__free_wchar_t_static_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE590_Free_Memory_Not_on_Heap__free_wchar_t_static_67_structType myStruct;
    data = NULL; 
    {
        static wchar_t dataBuffer[100];
        wmemset(dataBuffer, L'A', 100-1); 
        dataBuffer[100-1] = L'\0'; 
        data = dataBuffer;
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE590_Free_Memory_Not_on_Heap__free_wchar_t_static_67_structType
{
    wchar_t * structFirst;
} CWE590_Free_Memory_Not_on_Heap__free_wchar_t_static_67_structType;
void FUN0(CWE590_Free_Memory_Not_on_Heap__free_wchar_t_static_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    printWLine(data);
<START>
    free(data);
<END>
}
