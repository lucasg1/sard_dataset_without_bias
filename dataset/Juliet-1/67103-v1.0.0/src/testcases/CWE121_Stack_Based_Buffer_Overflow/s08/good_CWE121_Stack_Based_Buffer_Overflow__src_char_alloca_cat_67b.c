typedef struct _CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_67_structType
{
    char * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_67_structType myStruct;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    data = dataBuffer;
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_67_structType
{
    char * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        char dest[50] = "";
        strcat(dest, data);
        printLine(data);
    }
}
