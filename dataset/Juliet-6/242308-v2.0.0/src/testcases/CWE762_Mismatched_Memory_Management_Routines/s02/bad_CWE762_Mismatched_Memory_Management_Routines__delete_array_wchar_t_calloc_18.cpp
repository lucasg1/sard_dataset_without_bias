namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    data = (wchar_t *)calloc(100, sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    goto sink;
sink:
<START>
    delete [] data;
<END>
}
} 
