static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = (int *)calloc(100, sizeof(int));
        if (data == NULL) {exit(-1);}
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(STATIC_CONST_FIVE==5)
    {
<START>
<END>
        ; 
    }
}
