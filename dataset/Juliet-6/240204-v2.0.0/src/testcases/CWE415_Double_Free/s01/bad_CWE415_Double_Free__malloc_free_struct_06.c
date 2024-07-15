static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
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
