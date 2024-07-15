namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    TwoIntsClass * &dataRef = data;
    data = NULL;
    data = new TwoIntsClass[100];
    {
        TwoIntsClass * data = dataRef;
        delete [] data;
    }
}
void FUN1()
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
} 
