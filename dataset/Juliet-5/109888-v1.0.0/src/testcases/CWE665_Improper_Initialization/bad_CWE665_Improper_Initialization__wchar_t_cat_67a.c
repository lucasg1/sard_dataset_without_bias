typedef struct _CWE665_Improper_Initialization__wchar_t_cat_67_structType
{
    wchar_t * structFirst;
} CWE665_Improper_Initialization__wchar_t_cat_67_structType;
void FUN0(CWE665_Improper_Initialization__wchar_t_cat_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        wcscat(data, source);
        printWLine(data);
    }
}
typedef struct _CWE665_Improper_Initialization__wchar_t_cat_67_structType
{
    wchar_t * structFirst;
} CWE665_Improper_Initialization__wchar_t_cat_67_structType;
void FUN0(CWE665_Improper_Initialization__wchar_t_cat_67_structType myStruct);
void FUN2()
{
    wchar_t * data;
    CWE665_Improper_Initialization__wchar_t_cat_67_structType myStruct;
    wchar_t dataBuffer[100];
    data = dataBuffer;
<START>
<END>
    ; 
    myStruct.structFirst = data;
    FUN0(myStruct);
}
