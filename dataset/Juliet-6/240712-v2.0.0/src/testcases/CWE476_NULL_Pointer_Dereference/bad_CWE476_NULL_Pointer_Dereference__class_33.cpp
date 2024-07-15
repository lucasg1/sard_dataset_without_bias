namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    TwoIntsClass * &dataRef = data;
    data = NULL;
    {
        TwoIntsClass * data = dataRef;
<START>
        printIntLine(data->intOne);
<END>
        delete data;
    }
}
} 
