typedef struct _CWE194_Unexpected_Sign_Extension__negative_memcpy_67_structType
{
    short structFirst;
} CWE194_Unexpected_Sign_Extension__negative_memcpy_67_structType;
void FUN0(CWE194_Unexpected_Sign_Extension__negative_memcpy_67_structType myStruct);
void FUN1()
{
    short data;
    CWE194_Unexpected_Sign_Extension__negative_memcpy_67_structType myStruct;
    data = 0;
    data = -1;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE194_Unexpected_Sign_Extension__negative_memcpy_67_structType
{
    short structFirst;
} CWE194_Unexpected_Sign_Extension__negative_memcpy_67_structType;
void FUN0(CWE194_Unexpected_Sign_Extension__negative_memcpy_67_structType myStruct)
{
    short data = myStruct.structFirst;
    {
        char source[100];
        char dest[100] = "";
        memset(source, 'A', 100-1);
        source[100-1] = '\0';
        if (data < 100)
        {
<START>
            memcpy(dest, source, data);
<END>
            dest[data] = '\0'; 
        }
        printLine(dest);
    }
}
