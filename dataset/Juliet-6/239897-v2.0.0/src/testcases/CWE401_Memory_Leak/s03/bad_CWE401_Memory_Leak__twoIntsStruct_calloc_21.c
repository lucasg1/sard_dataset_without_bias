static int VAR0 = 0;
void FUN0(twoIntsStruct * data)
{
    if(VAR0)
    {
<START>
<END>
        ; 
    }
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    VAR0 = 1; 
    FUN0(data);
}
