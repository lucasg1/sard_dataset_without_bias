namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    data = new wchar_t;
    delete data;
    goto sink;
sink:
<START>
    delete data;
<END>
}
} 
