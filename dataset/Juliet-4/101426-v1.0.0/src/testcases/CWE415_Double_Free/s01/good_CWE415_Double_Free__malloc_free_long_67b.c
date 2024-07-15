typedef struct _CWE415_Double_Free__malloc_free_long_67_structType
{
    long * structFirst;
} CWE415_Double_Free__malloc_free_long_67_structType;
void FUN0(CWE415_Double_Free__malloc_free_long_67_structType myStruct);
void FUN1()
{
    long * data;
    CWE415_Double_Free__malloc_free_long_67_structType myStruct;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE415_Double_Free__malloc_free_long_67_structType myStruct);
void FUN3()
{
    long * data;
    CWE415_Double_Free__malloc_free_long_67_structType myStruct;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    free(data);
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE415_Double_Free__malloc_free_long_67_structType
{
    long * structFirst;
} CWE415_Double_Free__malloc_free_long_67_structType;
void FUN0(CWE415_Double_Free__malloc_free_long_67_structType myStruct)
{
    long * data = myStruct.structFirst;
    free(data);
}
void FUN2(CWE415_Double_Free__malloc_free_long_67_structType myStruct)
{
    long * data = myStruct.structFirst;
    ; 
}
