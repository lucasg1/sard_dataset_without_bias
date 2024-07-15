namespace NAMESPACE0
{
void FUN0()
{
    int i,j;
    wchar_t * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = NULL;
        data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
    }
    for(j = 0; j < 1; j++)
    {
<START>
        delete [] data;
<END>
    }
}
} 
