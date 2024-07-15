int VAR0 = 0;
void FUN0(struct _twoIntsStruct * data);
void FUN1()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = (struct _twoIntsStruct *)malloc(100*sizeof(struct _twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(struct _twoIntsStruct * data)
{
    if(VAR0)
    {
<START>
<END>
        ; 
    }
}
