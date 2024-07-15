typedef struct _CWE415_Double_Free__malloc_free_char_67_structType
{
    char * structFirst;
} CWE415_Double_Free__malloc_free_char_67_structType;
void FUN0(CWE415_Double_Free__malloc_free_char_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE415_Double_Free__malloc_free_char_67_structType myStruct;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE415_Double_Free__malloc_free_char_67_structType myStruct);
void FUN3()
{
    char * data;
    CWE415_Double_Free__malloc_free_char_67_structType myStruct;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    free(data);
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE415_Double_Free__malloc_free_char_67_structType
{
    char * structFirst;
} CWE415_Double_Free__malloc_free_char_67_structType;
void FUN0(CWE415_Double_Free__malloc_free_char_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    free(data);
}
void FUN2(CWE415_Double_Free__malloc_free_char_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    ; 
}
