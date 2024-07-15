namespace NAMESPACE0
{
static TwoIntsClass * FUN0(TwoIntsClass * data)
{
    data = new TwoIntsClass[100];
    return data;
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = FUN0(data);
    delete [] data;
}
static TwoIntsClass * FUN2(TwoIntsClass * data)
{
    data = new TwoIntsClass[100];
    delete [] data;
    return data;
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    data = FUN2(data);
    ; 
}
} 
