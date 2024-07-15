static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = (struct _twoIntsStruct *)malloc(100*sizeof(struct _twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
    }
    if(STATIC_CONST_TRUE)
    {
<START>
<END>
        ; 
    }
}
