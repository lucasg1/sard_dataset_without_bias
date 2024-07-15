static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int * data;
    if(STATIC_CONST_FIVE==5)
    {
        data = NULL;
    }
    if(STATIC_CONST_FIVE==5)
    {
<START>
        printIntLine(*data);
<END>
    }
}
