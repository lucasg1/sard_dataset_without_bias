namespace NAMESPACE0
{
void FUN0()
{
    struct _twoIntsStruct * data;
    data = NULL;
    struct _twoIntsStruct VAR1;
    data = &VAR1;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine((twoIntsStruct *)data);
    {
        struct _twoIntsStruct * dataCopy = data;
        struct _twoIntsStruct * data = dataCopy;
        ; 
    }
}
void FUN1()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = new struct _twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine((twoIntsStruct *)data);
    {
        struct _twoIntsStruct * dataCopy = data;
        struct _twoIntsStruct * data = dataCopy;
        delete data;
    }
}
} 
