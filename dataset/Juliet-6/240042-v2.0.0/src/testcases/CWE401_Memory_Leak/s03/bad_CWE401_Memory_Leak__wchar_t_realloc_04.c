static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wcscpy(data, L"A String");
        printWLine(data);
    }
    if(STATIC_CONST_TRUE)
    {
<START>
<END>
        ; 
    }
}
