void FUN0()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(globalTrue)
    {
        data = (struct _twoIntsStruct *)realloc(data, 100*sizeof(struct _twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
    }
    if(globalTrue)
    {
<START>
<END>
        ; 
    }
}
