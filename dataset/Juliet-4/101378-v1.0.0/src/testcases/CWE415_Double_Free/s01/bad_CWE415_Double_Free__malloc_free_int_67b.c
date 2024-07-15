typedef struct _CWE415_Double_Free__malloc_free_int_67_structType
{
    int * structFirst;
} CWE415_Double_Free__malloc_free_int_67_structType;
void FUN0(CWE415_Double_Free__malloc_free_int_67_structType myStruct);
void FUN1()
{
    int * data;
    CWE415_Double_Free__malloc_free_int_67_structType myStruct;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    free(data);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE415_Double_Free__malloc_free_int_67_structType
{
    int * structFirst;
} CWE415_Double_Free__malloc_free_int_67_structType;
void FUN0(CWE415_Double_Free__malloc_free_int_67_structType myStruct)
{
    int * data = myStruct.structFirst;
<START>
    free(data);
<END>
}
