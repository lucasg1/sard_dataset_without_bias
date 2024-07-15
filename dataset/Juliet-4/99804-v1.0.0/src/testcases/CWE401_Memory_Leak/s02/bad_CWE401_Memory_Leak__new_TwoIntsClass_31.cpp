namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass;
    data->intOne = 0;
    data->intTwo = 0;
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
    {
        TwoIntsClass * dataCopy = data;
        TwoIntsClass * data = dataCopy;
<START>
<END>
        ; 
    }
}
} 
