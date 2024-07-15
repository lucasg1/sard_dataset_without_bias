namespace NAMESPACE0
{
void FUN0()
{
    struct _twoIntsStruct * data;
    struct _twoIntsStruct * *dataPtr1 = &data;
    struct _twoIntsStruct * *dataPtr2 = &data;
    data = NULL;
    {
        struct _twoIntsStruct * data = *dataPtr1;
        data = new struct _twoIntsStruct;
        data->intOne = 0;
        data->intTwo = 0;
        printStructLine((twoIntsStruct *)data);
        *dataPtr1 = data;
    }
    {
        struct _twoIntsStruct * data = *dataPtr2;
<START>
<END>
        ; 
    }
}
} 
