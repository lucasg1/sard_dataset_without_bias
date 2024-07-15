namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct * &dataRef = data;
    data = NULL;
    data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    {
        twoIntsStruct * data = dataRef;
<START>
<END>
        ; 
    }
}
} 
