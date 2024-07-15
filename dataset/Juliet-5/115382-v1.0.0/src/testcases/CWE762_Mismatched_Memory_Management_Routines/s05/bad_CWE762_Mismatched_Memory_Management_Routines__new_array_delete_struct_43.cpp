namespace NAMESPACE0
{
void FUN0(twoIntsStruct * &data)
{
    data = new twoIntsStruct[100];
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
