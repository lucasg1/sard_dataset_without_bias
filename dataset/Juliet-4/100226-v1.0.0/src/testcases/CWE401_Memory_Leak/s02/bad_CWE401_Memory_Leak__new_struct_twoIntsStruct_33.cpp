namespace NAMESPACE0
{
void FUN0()
{
    struct _twoIntsStruct * data;
    struct _twoIntsStruct * &dataRef = data;
    data = NULL;
    data = new struct _twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine((twoIntsStruct *)data);
    {
        struct _twoIntsStruct * data = dataRef;
<START>
<END>
        ; 
    }
}
} 
