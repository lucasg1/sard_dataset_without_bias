namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    goto source;
source:
    data = new TwoIntsClass;
    goto sink;
sink:
<START>
    free(data);
<END>
}
} 
