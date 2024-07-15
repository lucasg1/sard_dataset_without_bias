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
<START>
        free(data);
<END>
    }
}
} 
