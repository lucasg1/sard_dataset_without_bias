static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    wchar_t * data;
    if(STATIC_CONST_FIVE==5)
    {
        data = NULL;
    }
    if(STATIC_CONST_FIVE==5)
    {
<START>
        printWcharLine(data[0]);
<END>
    }
}
