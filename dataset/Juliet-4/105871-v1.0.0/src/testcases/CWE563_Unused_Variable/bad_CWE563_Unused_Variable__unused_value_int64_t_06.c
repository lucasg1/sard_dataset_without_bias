static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int64_t data;
    if(STATIC_CONST_FIVE==5)
    {
        data = 5LL;
    }
    if(STATIC_CONST_FIVE==5)
    {
<START>
        data = 10LL;
<END>
        printLongLongLine(data);
    }
}
