namespace NAMESPACE0
{
void FUN0(twoIntsStruct * &data)
{
    data = new twoIntsStruct;
    data->intOne = 1;
    data->intTwo = 2;
    delete data;
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    FUN0(data);
<START>
    printStructLine(data);
<END>
}
} 
