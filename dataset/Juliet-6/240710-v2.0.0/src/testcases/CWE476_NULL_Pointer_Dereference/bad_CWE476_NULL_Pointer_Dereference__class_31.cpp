namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    {
        TwoIntsClass * dataCopy = data;
        TwoIntsClass * data = dataCopy;
<START>
        printIntLine(data->intOne);
<END>
        delete data;
    }
}
} 
