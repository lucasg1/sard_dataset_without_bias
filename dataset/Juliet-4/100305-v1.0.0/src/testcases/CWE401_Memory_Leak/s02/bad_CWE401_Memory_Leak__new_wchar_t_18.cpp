namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    data = new wchar_t;
    *data = L'A';
    printHexCharLine((char)*data);
    goto sink;
sink:
<START>
<END>
    ; 
}
} 
