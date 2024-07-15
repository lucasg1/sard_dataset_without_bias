typedef struct _CWE415_Double_Free__malloc_free_struct_67_structType
{
    twoIntsStruct * structFirst;
} CWE415_Double_Free__malloc_free_struct_67_structType;
void FUN0(CWE415_Double_Free__malloc_free_struct_67_structType myStruct);
void FUN1()
{
    twoIntsStruct * data;
    CWE415_Double_Free__malloc_free_struct_67_structType myStruct;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE415_Double_Free__malloc_free_struct_67_structType myStruct);
void FUN3()
{
    twoIntsStruct * data;
    CWE415_Double_Free__malloc_free_struct_67_structType myStruct;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    free(data);
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE415_Double_Free__malloc_free_struct_67_structType
{
    twoIntsStruct * structFirst;
} CWE415_Double_Free__malloc_free_struct_67_structType;
void FUN0(CWE415_Double_Free__malloc_free_struct_67_structType myStruct)
{
    twoIntsStruct * data = myStruct.structFirst;
    free(data);
}
void FUN2(CWE415_Double_Free__malloc_free_struct_67_structType myStruct)
{
    twoIntsStruct * data = myStruct.structFirst;
    ; 
}
