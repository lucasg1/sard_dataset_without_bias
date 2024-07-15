namespace NAMESPACE0
{
void FUN0(twoIntsStruct * &data)
{
    data = new twoIntsStruct;
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    FUN0(data);
    delete data;
}
void FUN2(twoIntsStruct * &data)
{
    data = new twoIntsStruct;
    delete data;
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    FUN2(data);
    ; 
}
} 
