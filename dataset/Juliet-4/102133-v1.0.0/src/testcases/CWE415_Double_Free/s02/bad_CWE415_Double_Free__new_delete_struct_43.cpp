namespace NAMESPACE0
{
void FUN0(twoIntsStruct * &data)
{
    data = new twoIntsStruct;
    delete data;
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    FUN0(data);
<START>
    delete data;
<END>
}
} 
