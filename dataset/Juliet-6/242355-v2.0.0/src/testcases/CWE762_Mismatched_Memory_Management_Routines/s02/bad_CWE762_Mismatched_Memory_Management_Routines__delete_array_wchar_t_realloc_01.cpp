namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    data = NULL;
    data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
<START>
    delete [] data;
<END>
}
} 
