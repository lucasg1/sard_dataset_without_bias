void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(5==5)
    {
        data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine(&data[0]);
    }
    if(5==5)
    {
<START>
<END>
        ; 
    }
}
