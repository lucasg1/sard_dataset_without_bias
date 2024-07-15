typedef union
{
    void * unionFirst;
    void * unionSecond;
} CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_34_unionType;
void FUN0()
{
    void * data;
    CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_34_unionType myUnion;
    twoIntsStruct dataGoodBuffer;
    int VAR0 = 100;
    dataGoodBuffer.intOne = 0;
    dataGoodBuffer.intTwo = 0;
    data = &dataGoodBuffer;
    myUnion.unionFirst = data;
    {
        void * data = myUnion.unionSecond;
        printStructLine((twoIntsStruct *)data);
    }
}
