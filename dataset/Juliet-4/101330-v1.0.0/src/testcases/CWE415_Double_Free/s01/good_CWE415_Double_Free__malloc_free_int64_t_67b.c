typedef struct _CWE415_Double_Free__malloc_free_int64_t_67_structType
{
    int64_t * structFirst;
} CWE415_Double_Free__malloc_free_int64_t_67_structType;
void FUN0(CWE415_Double_Free__malloc_free_int64_t_67_structType myStruct);
void FUN1()
{
    int64_t * data;
    CWE415_Double_Free__malloc_free_int64_t_67_structType myStruct;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE415_Double_Free__malloc_free_int64_t_67_structType myStruct);
void FUN3()
{
    int64_t * data;
    CWE415_Double_Free__malloc_free_int64_t_67_structType myStruct;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    free(data);
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE415_Double_Free__malloc_free_int64_t_67_structType
{
    int64_t * structFirst;
} CWE415_Double_Free__malloc_free_int64_t_67_structType;
void FUN0(CWE415_Double_Free__malloc_free_int64_t_67_structType myStruct)
{
    int64_t * data = myStruct.structFirst;
    free(data);
}
void FUN2(CWE415_Double_Free__malloc_free_int64_t_67_structType myStruct)
{
    int64_t * data = myStruct.structFirst;
    ; 
}
