void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct * *dataPtr1 = &data;
    twoIntsStruct * *dataPtr2 = &data;
    data = NULL;
    {
        twoIntsStruct * data = *dataPtr1;
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine(&data[0]);
        *dataPtr1 = data;
    }
    {
        twoIntsStruct * data = *dataPtr2;
<START>
<END>
        ; 
    }
}
