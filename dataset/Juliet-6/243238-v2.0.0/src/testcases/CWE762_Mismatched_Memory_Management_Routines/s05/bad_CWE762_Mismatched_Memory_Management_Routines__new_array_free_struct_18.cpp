namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    goto source;
source:
    data = new twoIntsStruct[100];
    goto sink;
sink:
<START>
    free(data);
<END>
}
} 
