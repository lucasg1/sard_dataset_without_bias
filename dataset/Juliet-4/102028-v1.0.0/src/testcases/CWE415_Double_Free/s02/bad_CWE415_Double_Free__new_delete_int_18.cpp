namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    goto source;
source:
    data = new int;
    delete data;
    goto sink;
sink:
<START>
    delete data;
<END>
}
} 
