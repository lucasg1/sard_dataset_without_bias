namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    goto source;
source:
    data = new int64_t[100];
    goto sink;
sink:
<START>
    delete data;
<END>
}
} 
