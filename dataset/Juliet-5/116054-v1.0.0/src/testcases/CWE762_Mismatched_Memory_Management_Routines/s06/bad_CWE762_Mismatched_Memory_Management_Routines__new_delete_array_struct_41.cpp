namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data)
{
<START>
    delete [] data;
<END>
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct;
    FUN0(data);
}
} 
