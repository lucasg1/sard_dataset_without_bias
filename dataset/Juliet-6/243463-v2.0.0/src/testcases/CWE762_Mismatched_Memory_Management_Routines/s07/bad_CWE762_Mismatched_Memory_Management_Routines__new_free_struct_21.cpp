namespace NAMESPACE0
{
static int VAR1 = 0;
void FUN0(twoIntsStruct * data)
{
    if(VAR1)
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
    data = new twoIntsStruct;
    VAR1 = 1; 
    FUN0(data);
}
} 
