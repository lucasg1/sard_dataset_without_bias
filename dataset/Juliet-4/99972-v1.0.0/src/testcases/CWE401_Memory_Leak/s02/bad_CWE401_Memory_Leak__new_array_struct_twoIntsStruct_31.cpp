namespace NAMESPACE0
{
void FUN0()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = new struct _twoIntsStruct[100];
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    {
        struct _twoIntsStruct * dataCopy = data;
        struct _twoIntsStruct * data = dataCopy;
<START>
<END>
        ; 
    }
}
} 
