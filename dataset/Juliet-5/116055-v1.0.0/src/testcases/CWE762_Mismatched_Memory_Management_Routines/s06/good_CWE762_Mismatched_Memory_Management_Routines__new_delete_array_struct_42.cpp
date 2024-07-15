namespace NAMESPACE0
{
static twoIntsStruct * FUN0(twoIntsStruct * data)
{
    data = new twoIntsStruct[100];
    return data;
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = FUN0(data);
    delete [] data;
}
static twoIntsStruct * FUN2(twoIntsStruct * data)
{
    data = new twoIntsStruct;
    return data;
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    data = FUN2(data);
    delete data;
}
} 
