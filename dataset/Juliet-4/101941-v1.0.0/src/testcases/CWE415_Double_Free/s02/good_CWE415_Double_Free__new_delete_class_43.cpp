namespace NAMESPACE0
{
void FUN0(TwoIntsClass * &data)
{
    data = new TwoIntsClass;
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    FUN0(data);
    delete data;
}
void FUN2(TwoIntsClass * &data)
{
    data = new TwoIntsClass;
    delete data;
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    FUN2(data);
    ; 
}
} 
