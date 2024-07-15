void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalFive==5)
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine(&data[0]);
    }
    if(globalFive==5)
    {
<START>
<END>
        ; 
    }
}
