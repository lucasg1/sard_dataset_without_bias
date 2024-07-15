void FUN0()
{
    int i,j;
    twoIntsStruct * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine(&data[0]);
    }
    for(j = 0; j < 1; j++)
    {
<START>
<END>
        ; 
    }
}
