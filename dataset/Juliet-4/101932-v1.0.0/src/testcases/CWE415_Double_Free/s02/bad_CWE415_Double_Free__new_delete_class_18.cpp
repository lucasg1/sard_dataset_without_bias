namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    goto source;
source:
    data = new TwoIntsClass;
    delete data;
    goto sink;
sink:
<START>
    delete data;
<END>
}
} 
