static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = (int64_t *)calloc(100, sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        data[0] = 5LL;
        printLongLongLine(data[0]);
    }
    if(STATIC_CONST_FIVE==5)
    {
<START>
<END>
        ; 
    }
}
