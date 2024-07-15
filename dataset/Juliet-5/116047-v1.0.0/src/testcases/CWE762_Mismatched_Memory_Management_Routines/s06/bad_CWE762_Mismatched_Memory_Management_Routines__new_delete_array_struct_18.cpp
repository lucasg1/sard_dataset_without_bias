namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    goto source;
source:
    data = new twoIntsStruct;
    goto sink;
sink:
<START>
    delete [] data;
<END>
}
} 
