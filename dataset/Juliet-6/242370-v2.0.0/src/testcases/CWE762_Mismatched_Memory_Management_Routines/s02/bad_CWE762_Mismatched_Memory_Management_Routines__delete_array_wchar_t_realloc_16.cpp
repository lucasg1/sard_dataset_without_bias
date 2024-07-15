namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    while(1)
    {
        data = NULL;
        data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        break;
    }
    while(1)
    {
<START>
        delete [] data;
<END>
        break;
    }
}
} 
