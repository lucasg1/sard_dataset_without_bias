namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass[100];
    {
        TwoIntsClass * dataCopy = data;
        TwoIntsClass * data = dataCopy;
        delete [] data;
    }
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass[100];
    delete [] data;
    {
        TwoIntsClass * dataCopy = data;
        TwoIntsClass * data = dataCopy;
        ; 
    }
}
} 
