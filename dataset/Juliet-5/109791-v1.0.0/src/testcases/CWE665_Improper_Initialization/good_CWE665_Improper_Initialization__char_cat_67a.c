typedef struct _CWE665_Improper_Initialization__char_cat_67_structType
{
    char * structFirst;
} CWE665_Improper_Initialization__char_cat_67_structType;
void FUN0(CWE665_Improper_Initialization__char_cat_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strcat(data, source);
        printLine(data);
    }
}
typedef struct _CWE665_Improper_Initialization__char_cat_67_structType
{
    char * structFirst;
} CWE665_Improper_Initialization__char_cat_67_structType;
void FUN0(CWE665_Improper_Initialization__char_cat_67_structType myStruct);
void FUN2()
{
    char * data;
    CWE665_Improper_Initialization__char_cat_67_structType myStruct;
    char dataBuffer[100];
    data = dataBuffer;
    data[0] = '\0'; 
    myStruct.structFirst = data;
    FUN0(myStruct);
}
