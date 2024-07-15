int VAR0 = 0;
void FUN0(twoIntsStruct data);
void FUN1()
{
    twoIntsStruct data;
    data.intOne = 0;
    data.intTwo = 0;
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(twoIntsStruct data)
{
    if(VAR0)
    {
<START>
        data.intOne = 1;
<END>
        data.intTwo = 1;
        printStructLine(&data);
    }
}
