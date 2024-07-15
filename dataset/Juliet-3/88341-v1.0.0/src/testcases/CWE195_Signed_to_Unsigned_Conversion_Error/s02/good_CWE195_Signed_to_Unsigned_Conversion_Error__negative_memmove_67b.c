typedef struct _CWE195_Signed_to_Unsigned_Conversion_Error__negative_memmove_67_structType
{
    int structFirst;
} CWE195_Signed_to_Unsigned_Conversion_Error__negative_memmove_67_structType;
void FUN0(CWE195_Signed_to_Unsigned_Conversion_Error__negative_memmove_67_structType myStruct);
void FUN1()
{
    int data;
    CWE195_Signed_to_Unsigned_Conversion_Error__negative_memmove_67_structType myStruct;
    data = -1;
    data = 100-1;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE195_Signed_to_Unsigned_Conversion_Error__negative_memmove_67_structType
{
    int structFirst;
} CWE195_Signed_to_Unsigned_Conversion_Error__negative_memmove_67_structType;
void FUN0(CWE195_Signed_to_Unsigned_Conversion_Error__negative_memmove_67_structType myStruct)
{
    int data = myStruct.structFirst;
    {
        char source[100];
        char dest[100] = "";
        memset(source, 'A', 100-1);
        source[100-1] = '\0';
        if (data < 100)
        {
            memmove(dest, source, data);
            dest[data] = '\0'; 
        }
        printLine(dest);
    }
}
