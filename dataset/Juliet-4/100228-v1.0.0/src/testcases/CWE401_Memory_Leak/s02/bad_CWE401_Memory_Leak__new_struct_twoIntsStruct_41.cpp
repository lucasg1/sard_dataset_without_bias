namespace NAMESPACE0
{
void FUN0(struct _twoIntsStruct * data)
{
<START>
<END>
    ; 
}
void FUN1()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = new struct _twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine((twoIntsStruct *)data);
    FUN0(data);
}
} 
