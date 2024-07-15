namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    goto source;
source:
    data = NULL;
    goto sink;
sink:
<START>
    printIntLine(data->intOne);
<END>
    delete data;
}
} 
