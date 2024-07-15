typedef struct _CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_67_structType
{
    void * structFirst;
} CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_67_structType;
void FUN0(CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_67_structType myStruct);
void FUN1()
{
    void * data;
    CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_67_structType myStruct;
    twoIntsStruct dataGoodBuffer;
    int VAR0 = 100;
    dataGoodBuffer.intOne = 0;
    dataGoodBuffer.intTwo = 0;
    data = &dataGoodBuffer;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_67_structType
{
    void * structFirst;
} CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_67_structType;
void FUN0(CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_67_structType myStruct)
{
    void * data = myStruct.structFirst;
    printStructLine((twoIntsStruct *)data);
}
