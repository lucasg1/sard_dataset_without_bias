typedef union
{
    twoIntsStruct * unionFirst;
    twoIntsStruct * unionSecond;
} CWE690_NULL_Deref_From_Return__struct_realloc_34_unionType;
void FUN0()
{
    twoIntsStruct * data;
    CWE690_NULL_Deref_From_Return__struct_realloc_34_unionType myUnion;
    data = NULL; 
    data = (twoIntsStruct *)realloc(data, 1*sizeof(twoIntsStruct));
    myUnion.unionFirst = data;
    {
        twoIntsStruct * data = myUnion.unionSecond;
        if (data != NULL)
        {
            data[0].intOne = 1;
            data[0].intTwo = 1;
            printStructLine(&data[0]);
            free(data);
        }
    }
}
