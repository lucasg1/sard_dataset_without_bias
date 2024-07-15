namespace NAMESPACE0
{
static twoIntsStruct * FUN0(twoIntsStruct * data)
{
    data = new twoIntsStruct;
    return data;
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = FUN0(data);
<START>
    delete [] data;
<END>
}
} 
