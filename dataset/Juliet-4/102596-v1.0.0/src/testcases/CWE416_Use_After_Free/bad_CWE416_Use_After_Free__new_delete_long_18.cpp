namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    goto source;
source:
    data = new long;
    *data = 5L;
    delete data;
    goto sink;
sink:
<START>
    printLongLine(*data);
<END>
}
} 
