namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    TwoIntsClass * &dataRef = data;
    data = NULL;
    data = new TwoIntsClass;
    delete data;
    {
        TwoIntsClass * data = dataRef;
<START>
        delete data;
<END>
    }
}
} 
