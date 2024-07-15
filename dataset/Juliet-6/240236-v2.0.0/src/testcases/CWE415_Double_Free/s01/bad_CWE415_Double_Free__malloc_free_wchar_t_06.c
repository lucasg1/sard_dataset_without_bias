static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
<START>
        free(data);
<END>
    }
    if(STATIC_CONST_FIVE==5)
    {
        free(data);
    }
}
