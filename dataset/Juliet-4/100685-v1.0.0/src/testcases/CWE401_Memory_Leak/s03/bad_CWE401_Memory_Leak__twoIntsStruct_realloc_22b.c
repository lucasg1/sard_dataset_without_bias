int VAR0 = 0;
void FUN0(twoIntsStruct * data);
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(twoIntsStruct * data)
{
    if(VAR0)
    {
<START>
<END>
        ; 
    }
}
