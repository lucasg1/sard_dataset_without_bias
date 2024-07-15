namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    TwoIntsClass * &dataRef = data;
    data = NULL;
    data = new TwoIntsClass;
    {
        TwoIntsClass * data = dataRef;
        delete data;
    }
}
void FUN1()
{
    TwoIntsClass * data;
    TwoIntsClass * &dataRef = data;
    data = NULL;
    data = new TwoIntsClass;
    delete data;
    {
        TwoIntsClass * data = dataRef;
        ; 
    }
}
} 
