static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(staticTrue)
    {
        data = (struct _twoIntsStruct *)malloc(100*sizeof(struct _twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
    }
    if(staticTrue)
    {
<START>
<END>
        ; 
    }
}
