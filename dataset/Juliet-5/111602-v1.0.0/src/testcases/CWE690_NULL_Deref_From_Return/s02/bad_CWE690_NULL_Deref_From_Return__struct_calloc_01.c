void FUN0()
{
    twoIntsStruct * data;
    data = NULL; 
    data = (twoIntsStruct *)calloc(1, sizeof(twoIntsStruct));
<START>
    data[0].intOne = 1;
    data[0].intTwo = 1;
<END>
    printStructLine(&data[0]);
    free(data);
}
