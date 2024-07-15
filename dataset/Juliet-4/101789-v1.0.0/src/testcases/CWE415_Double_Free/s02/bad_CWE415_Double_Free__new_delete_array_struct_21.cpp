namespace NAMESPACE0
{
static int VAR1 = 0;
void FUN0(twoIntsStruct * data)
{
    if(VAR1)
    {
<START>
        delete [] data;
<END>
    }
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct[100];
    delete [] data;
    VAR1 = 1; 
    FUN0(data);
}
} 
