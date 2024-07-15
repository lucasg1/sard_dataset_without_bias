static int VAR0 = 0;
void FUN0(twoIntsStruct * data)
{
    if(VAR0)
    {
<START>
        free(data);
<END>
    }
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    free(data);
    VAR0 = 1; 
    FUN0(data);
}
