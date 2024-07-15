static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = (wchar_t *)calloc(100, sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wcscpy(data, L"A String");
        printWLine(data);
    }
    if(STATIC_CONST_FIVE==5)
    {
<START>
<END>
        ; 
    }
}
