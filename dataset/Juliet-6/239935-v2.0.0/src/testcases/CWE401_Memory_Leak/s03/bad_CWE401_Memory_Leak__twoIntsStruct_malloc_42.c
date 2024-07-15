static twoIntsStruct * FUN0(twoIntsStruct * data)
{
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    return data;
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = FUN0(data);
<START>
<END>
    ; 
}
