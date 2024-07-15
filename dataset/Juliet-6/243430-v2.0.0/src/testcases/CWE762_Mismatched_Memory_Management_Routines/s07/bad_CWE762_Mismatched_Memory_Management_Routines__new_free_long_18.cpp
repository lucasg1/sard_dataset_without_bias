namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    goto source;
source:
    data = new long;
    goto sink;
sink:
<START>
    free(data);
<END>
}
} 
